#!/bin/bash

# ------------------------------------------------------
# Script Name: create_directories.sh
# Description: This script creates a specified number of directories
#              and optionally creates template files within them.
# Author: Juan Hernandez
# Date: 2024-10-30
# Version: 1.0.2
# Usage: ./create_directories.sh
# Dependencies: None
# ------------------------------------------------------

RESET="\e[0m"
BLACK="\e[0;30m"
RED="\e[0;31m"
ORANGE="\e[38;5;214m"
YELLOW="\e[0;33m"
GREEN="\e[0;32m"
BLUE="\e[0;34m"
MAGENTA="\e[0;35m"
CYAN="\e[0;36m"
WHITE="\e[0;37m"

# Function to display a progress bar
progress_bar() {
    local current=$1
    local total=$2
    local percent=$((current * 100 / total))
    local bar_length=50
    local filled_length=$((percent * bar_length / 100))
    local bar=$(printf "%-${filled_length}s" "=" | tr " " "=")
    local empty=$(printf "%-$((bar_length - filled_length))s")

    if [[ $percent -lt 25 ]]; then
        color=$RED
    elif [[ $percent -lt 50 ]]; then
        color=$ORANGE
    elif [[ $percent -lt 75 ]]; then
        color=$YELLOW
    elif [[ $percent -lt 95 ]]; then
        color=$GREEN
    else
        color=$BLUE
    fi

    printf "\r${color}[%s%s] %d%%${RESET}" "$bar" "$empty" "$percent"
    sleep 0.1
}

# Function to confirm actions
confirm_action() {
    local prompt="$1"
    local response

    while true; do
        echo -n "$prompt "
        read response
        response=${response,,} # Convert to lowercase

        if [[ "$response" == "y" || "$response" == "yes" ]]; then
            return 0 # True
        elif [[ "$response" == "n" || "$response" == "no" ]]; then
            return 1 # False
        else
            echo "Invalid input, Please enter 'y' or 'n'"
        fi
    done
}

# Function to create directories and template files
create_directories() {
    local create_files=$1
    local folders_number=$2
    local destination_folder=$3

    for ((i = 1; i <= folders_number; i++)); do
        directory_name="S$i"
        mkdir -p "$destination_folder/$directory_name" # Create the directory

        # Update the progress bar
        progress_bar $i $folders_number

        # # Create template files if requested
        # if [[ "$create_files" == true ]]; then
        #     touch example.txt
        #     # echo "Creating template files in $destination_folder/$directory_name"
        #     # Replace this with your function to create template files
        #     # do_something "$destination_folder/$directory_name"
        # fi
    done
    echo -e "\nAll $folders_number directories created successfully!"
}

# Main script execution
read -p "Enter the number of folders to create: " folders_number
read -p "Enter the destination folder: " destination_folder

# Prompt for creating directories
if confirm_action "Are you sure you want to create $folders_number new folders? (y/n)"; then

    # Prompt for creating template files
    if confirm_action "Do you want to additionally create template files for each directory? (y/n)"; then
        create_directories true "$folders_number" "$destination_folder"
    else
        create_directories false "$folders_number" "$destination_folder"
    fi

else
    echo "Exiting..."
    exit 0
fi
