#!/usr/bin/env bash

set -o errexit
set -o nounset
set -o pipefail

cd "$(git rev-parse --show-toplevel)"

rm -rf mesa-src
mv mesa-tmp mesa-src
rm -rf mesa-tmp

# apply local patches necessary for Servo's CI
patch -i patches/1.diff -p1
