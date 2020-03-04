#!/bin/sh

#cut -d: -f1 | grep "^$1" #| wc -l
cut -d: -f 5 | cut -d' ' -f 2 | grep ^$1 | wc -l
