#!/bin/bash
wget -P /tmp https://github.com/Manuel-7tin/alx-low_level_programming/raw/main/0x18-dynamic_libraries/manuel.so
export LD_PRELOAD=/tmp/manuel.so
