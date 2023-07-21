#!/bin/bash

# Add all .c files
git add *.c

# Commit changes with the provided message
git commit -m "$1"

# Push to the remote repository
git push

