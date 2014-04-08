#!/bin/sh

install -m 0755 -o root -g root src/tools/49rtbt /usr/lib/pm-utils/sleep.d/
install -m 0755 -o root -g root src/tools/rtbt /usr/bin/
install -m 0644 -o root -g root src/tools/ralink-bt.conf /etc/modprobe.d/
