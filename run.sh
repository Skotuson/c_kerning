#! /bin/bash
clear
g++ -Wall -pedantic main.c -fsanitize=address -g
./a.out < in.txt > out.txt
rm a.out;
