#!/bin/bash
wget -P /tmp/ https://github.com/Alexdev68/alx-low_level_programming/raw/master/0x18-dynamic_libraries/cuslibrary.so
export LD_PRELOAD=/tmp/cuslibrary.so
