#!/usr/bin/env bash

set -o errexit
set -o nounset
set -o pipefail

cd "$(git rev-parse --show-toplevel)"

rm -rf mesa-tmp mesa-src
git clone git://anongit.freedesktop.org/git/mesa/mesa mesa-tmp --depth 1
pushd mesa-tmp

VERSION=$(cat VERSION)

./autogen.sh                     \
   --disable-dri                 \
   --disable-driglx-direct       \
   --disable-dri3                \
   --disable-egl                 \
   --disable-gbm                 \
   --disable-gles1               \
   --disable-gles2               \
   --disable-glx                 \
   --enable-gallium-osmesa       \
   --with-platforms=             \
   --with-gallium-drivers=swrast

make -j8 dist
popd
tar -xvf mesa-tmp/mesa-${VERSION}.tar.gz
mv mesa-${VERSION} mesa-src
rm -rf mesa-tmp

# apply local patches necessary for Servo
patch -i patches/1.diff -p1
patch -i patches/2-mesa-issue-2034.diff -p1
patch -i patches/3-mesa-issue-2034.diff -p1
patch -i patches/4-mesa-issue-2034.diff -p1
