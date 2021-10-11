//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"",	"sb-tasks",	10,	26}, */
	/* {"",	"sb-music",	0,	11}, */
	/* {"",	"sb-pacpackages",	0,	8}, */
	/* {"",	"sb-news",		0,	6}, */
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰",				9000,	21}, */
	/* {"",	"sb-torrent",	20,	7}, */
	{"",	"sb-cpubars",		10,	18},
	{"Mem:",	"sb-memory",	10,	14},
	{"Tem:",	"sb-cpu",		10,	18},
	/* {"",	"sb-moonphase",	18000,	17}, */
	{"",	"sb-forecast",	18000,	5},
	/* {"",	"sb-mailbox",	180,	12}, */
	{"",	"sb-nettraf",	1,	16},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-battery",	5,	3},
	{"",	"sb-clock",	60,	1},
	{"",	"sb-internet",	5,	4},
	{"",	"sb-help-icon",	0,	15},
  {"",  "picom -b &", 0, 20},
  /* {"",  "feh --recursive --randomize --bg-fill /home/laughing/Pictures/12.jpg", 0, 0}, */
  /* {"",  "wal -i /home/laughing/Pictures/DT/0026.jpg > /dev/null &", 0, 21}, */
  {"",  "wal -i /home/laughing/Pictures/DT/0223.jpg > /dev/null &", 0, 21},
  /* {"",  "fcitx5 &", 0, 0}, please write "fcitx5 &" to ~/.xinitrc */ 
  /* {"",  "dunst &", 0, 22}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
/* static char *delim = " "; */
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
