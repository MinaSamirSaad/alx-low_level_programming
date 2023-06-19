#!/bin/bash
wget -P /tmp https://github.com/MinaSamirSaad/alx-low_level_programming/blob/master/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
