#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o libdynamic.so *.o -Wl,--allow-multiple-definition liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
