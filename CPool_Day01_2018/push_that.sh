#!/bin/sh


git add .
git commit -am $1
git push -f origin master
