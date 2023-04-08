
Debian
====================
This directory contains files used to package mnbtcd/mnbtc-qt
for Debian-based Linux systems. If you compile mnbtcd/mnbtc-qt yourself, there are some useful files here.

## pivx: URI support ##


mnbtc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mnbtc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mnbtc-qt binary to `/usr/bin`
and the `../../share/pixmaps/pivx128.png` to `/usr/share/pixmaps`

mnbtc-qt.protocol (KDE)

