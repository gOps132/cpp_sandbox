#!/bin/bash

#NOTE: Run the script everytime you change it, to load it into cmake cache

if [ ! -d "build" ]; then
    mkdir build
fi
cd build
cmake \
    -G "Unix Makefiles" \
    ..
make
./cpp_sandbox