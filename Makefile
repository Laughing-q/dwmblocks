.POSIX:

PREFIX = /usr/local
CC = gcc

dwmblocks: dwmblocks.o
	$(CC) dwmblocks.o -lX11 -o dwmblocks
dwmblocks.o: dwmblocks.c config.h
	$(CC) -c dwmblocks.c
clean:
	rm -f *.o *.gch dwmblocks
install: dwmblocks
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks
	cp -f scripts/* $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-cpu
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-memory
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-cpubars
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-forecast
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-nettraf
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-volume
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-battery
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-clock
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-help-icon
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sb-internet
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks

.PHONY: clean install uninstall
