#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared *.o -o liball.so
