#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/hiroos.kernel isodir/boot/hiroos.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "hiroos" {
	multiboot /boot/hiroos.kernel
}
EOF
grub-mkrescue -o hiroos.iso isodir
