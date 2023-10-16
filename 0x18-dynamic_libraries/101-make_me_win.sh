#!/bin/bash
wget -P .. https://github.com/Elpastore/alx-low_level_programming/raw/master/0x18-dynamic_libraries/always_win.so
export LD_PRELOAD=/$PWD/../always_win.so
