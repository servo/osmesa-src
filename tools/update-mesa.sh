#!/usr/bin/env bash

set -o errexit
set -o nounset
set -o pipefail

cd "$(git rev-parse --show-toplevel)"

rm -rf mesa-tmp mesa-src
if [ -n "${1:-}" ]; then
  git clone -n https://gitlab.freedesktop.org/mesa/mesa mesa-tmp
  git -C mesa-tmp checkout $1
else
  git clone https://gitlab.freedesktop.org/mesa/mesa mesa-tmp --depth 1
fi
mkdir mesa-tmp/build
pushd mesa-tmp/build

VERSION=$(cat ../VERSION)

if [ $(llvm-config --has-rtti) = NO ]; then
  RTTI=-Dcpp_rtti=false
else
  RTTI=
fi

meson setup ..                        \
   -Dplatforms=                       \
   -Dgallium-drivers=softpipe,llvmpipe\
   -Dvulkan-drivers=                  \
   -Dgles1=disabled                   \
   -Dgles2=disabled                   \
   -Dosmesa=true                      \
   -Degl=disabled                     \
   -Dgbm=disabled                     \
   -Dglx=disabled                     \
   $RTTI

meson dist
popd
tar -xvf mesa-tmp/build/meson-dist/mesa-${VERSION}.tar.xz
mv mesa-${VERSION} mesa-src
rm -rf mesa-tmp
