#!/bin/zsh

cd ./

sudo clang++ -std=c++23 -I./src/include -L/usr/lib src/functions.cpp src/main.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -o /usr/bin/sfmltests

# sym link with /usr/bin/
ln -s /usr/bin/sfmltests ./build/sfmltests
