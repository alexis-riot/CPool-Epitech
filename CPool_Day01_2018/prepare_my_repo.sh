#!/bin/sh

blih -u alexis.riot@epitech.eu repository create $1
blih -u alexis.riot@epitech.eu repository setacl $1 ramassage-tek r
blih -u alexis.riot@epitech.eu repository getacl $1
