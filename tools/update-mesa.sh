#!/usr/bin/env bash

set -o errexit
set -o nounset
set -o pipefail

cd "$(git rev-parse --show-toplevel)"

rm -rf mesa-tmp mesa-src
git clone git://anongit.freedesktop.org/git/mesa/mesa mesa-tmp --depth 1
mkdir mesa-tmp/build
pushd mesa-tmp/build

VERSION=$(cat ../VERSION)

meson ..                   \
   -Dplatforms=            \
   -Ddri3=disabled         \
   -Dglx-direct=false      \
   -Dgallium-drivers=swrast\
   -Ddri-drivers=          \
   -Dvulkan-drivers=       \
   -Dgles1=disabled        \
   -Dgles2=disabled        \
   -Dosmesa=gallium        \
   -Degl=disabled          \
   -Dgbm=disabled          \
   -Dglx=disabled

meson dist
popd
tar -xvf mesa-tmp/build/meson-dist/mesa-${VERSION}.tar.xz
mv mesa-${VERSION} mesa-src
rm -rf mesa-tmp

# apply local patches necessary for Servo or wrench cross-compilation
patch -i patches/1.diff -p1
patch -i patches/2-mesa-issue-2034.diff -p1
patch -i patches/3-mesa-issue-2035.diff -p1
patch -i patches/4-mesa-issue-1020.diff -p1
patch -i patches/5.diff -p1
