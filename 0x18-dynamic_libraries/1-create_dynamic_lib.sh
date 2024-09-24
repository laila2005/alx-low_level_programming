#!/bin/bash

gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o
rm -f *.o

echo "Dynamic library liball.so created successfully."
