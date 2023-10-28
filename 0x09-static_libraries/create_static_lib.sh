#!/bin/bash
gcc -Wall -pedantic -Werror -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
