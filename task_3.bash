#!/bin/bash

bashrc_file="$HOME/.bashrc"

# Check if .bashrc file exists
if [ -f "$bashrc_file" ]; then

    # Append HELLO variable
    echo "export HELLO=$HOSTNAME" >> "$bashrc_file"

    # Append LOCAL variable
    echo "export LOCAL=$(whoami)" >> "$bashrc_file"

    # Open another terminal
    gnome-terminal  
else
    echo "ERROR: $bashrc_file doesn't exist."
fi

