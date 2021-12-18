#!/bin/sh
touch .DS_Store
touch mywork.c
echo .DS_Store > .gitignore
echo mywork.c >> .gitignore
git ls-files -i -o --exclude-standard
