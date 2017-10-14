#!/usr/bin/env bash

set -o errexit
set -o nounset
set -o pipefail

cd "$(git rev-parse --show-toplevel)"

VERSION="17.3.0-devel"

rm -rf mesa-tmp mesa-src
git clone git://anongit.freedesktop.org/git/mesa/mesa mesa-tmp --depth 1
pushd mesa-tmp
./autogen.sh                     \
   --disable-dri                 \
   --disable-driglx-direct       \
   --disable-dri3                \
   --disable-egl                 \
   --disable-gbm                 \
   --disable-gles1               \
   --disable-gles2               \
   --disable-glx                 \
   --disable-llvm-shared-libs    \
   --enable-gallium-osmesa       \
   --with-gallium-drivers=swrast

make -j8 dist
popd
tar -xvf mesa-tmp/mesa-${VERSION}.tar.gz
mv mesa-${VERSION} mesa-src
rm -rf mesa-tmp
