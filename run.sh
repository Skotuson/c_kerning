#! /bin/bash
clear
g++ -Wall -pedantic "$1" -fsanitize=address -g
./a.out < in.txt > out.txt
rm a.out;
