#! /bin/bash
clear
g++ -Wall -pedantic "$1" -fsanitize=address -g
./a.out < ./io/"$2" > ./io/"$3"
rm a.out;
