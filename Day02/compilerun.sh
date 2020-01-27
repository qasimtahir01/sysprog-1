#!/bin/bash
echo $1
echo $2
gcc inputargs.c -o project1
./project1 $1 $2
