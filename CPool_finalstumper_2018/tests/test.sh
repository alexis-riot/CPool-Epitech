#!/bin/bash
clear
echo ' ';
echo "Test 1:";
./rush1-1 $1 $2 | ./rush_off
./rush1-1 $1 $2 | ./rush3
echo ' ';
echo 'Test 2:';
./rush1-2 $1 $2 | ./rush_off
./rush1-2 $1 $2 | ./rush3
echo ' ';
echo 'Test 3:';
./rush1-3 $1 $2 | ./rush_off
./rush1-3 $1 $2 | ./rush3
echo ' ';
echo 'Test 4:';
./rush1-4 $1 $2 | ./rush_off
./rush1-4 $1 $2 | ./rush3
echo ' ';
echo 'Test 5:';
./rush1-5 $1 $2 | ./rush_off
./rush1-5 $1 $2 | ./rush3
