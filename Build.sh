#!/bin/bash

set -e

for d in */ ; do
    cd "$d"
    g++ *.cpp
    cd ..
done
