#! /bin/bash
clear
g++ -Wall -pedantic "$1" -fsanitize=address -g
./a.out < ./io/in.txt > ./io/out.txt
rm a.out;
