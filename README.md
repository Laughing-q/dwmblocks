# dwmblocks
Modular status bar for dwm written in c.

# The scripts I'm using
- [X] sb-memory
- [X] sb-cpu
  - ls_sensors
- [X] sb-cpubars
- [X] sb-forecast
- [X] sb-nettraf
- [X] sb-volume
  - pamixer
- [X] sb-battery
- [X] sb-clock
- [X] sb-internet
- [X] sb-help-icon
  - okular
  - groff

```shell
# install colorful icon
yay -S ttf-joypixels
# sudo pacman -S noto-fonts-emoji
# install picom for pretty dress
sudo pacman -S picom
mkdir -p ~/.config/picom
cp /etc/xdg/picom.conf ~/.config/picom/

# install feh for image view and setting background
sudo pacman -S feh

# install pamixer for volume
yay -S pamixer

# for notify-send
sudo pacman -S dunst
echo "dunst &" >> ~/.xinitrc

# for brightness, cause xbacklight not work for me
yay -S light-git

# for tasks running background
yay -S task-spooler
```
The command such as `ranger` or `bpytop` running in the background can not find the variable added in my `.zshrc` configuration file.

So I set some environment variables, such as the `$BROWSER`, and `$PATH` to `/etc/profile` for now until I figure it out.
Putting the `ranger` or `bpytop` in `/usr/bin` also works.

The scripts can not find my `$TERMINAL` too, so I set it to `st` for now.

---


# Modifying blocks

The statusbar is made from text output from commandline programs.  Blocks are
added and removed by editing the config.h file.

# Luke's build

I have dwmblocks read my preexisting scripts
[here in my dotfiles repo](https://github.com/LukeSmithxyz/voidrice/tree/master/.local/bin/statusbar).
So if you want my build out of the box, download those and put them in your
`$PATH`. I do this to avoid redundancy in LARBS, both i3 and dwm use the same
statusbar scripts.

# Signaling changes

Most statusbars constantly rerun every script every several seconds to update.
This is an option here, but a superior choice is giving your module a signal
that you can signal to it to update on a relevant event, rather than having it
rerun idly.

For example, the audio module has the update signal 10 by default.  Thus,
running `pkill -RTMIN+10 dwmblocks` will update it.

You can also run `kill -44 $(pidof dwmblocks)` which will have the same effect,
but is faster.  Just add 34 to your typical signal number.

My volume module *never* updates on its own, instead I have this command run
along side my volume shortcuts in dwm to only update it when relevant.

Note that all modules must have different signal numbers.

# Clickable modules

Like i3blocks, this build allows you to build in additional actions into your
scripts in response to click events.  See the above linked scripts for examples
of this using the `$BLOCK_BUTTON` variable.

For this feature to work, you need the appropriate patch in dwm as well. See
[here](https://dwm.suckless.org/patches/statuscmd/).
Credit for those patches goes to Daniel Bylinka (daniel.bylinka@gmail.com).
