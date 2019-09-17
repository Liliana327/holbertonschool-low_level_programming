#!/bin/bash
gcc -shared -Wl,-soname,liball.so -o liball.so *.c
