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

# Source the modules
source "../modules/progress.sh"
source "../modules/confirmation.sh"
source "../modules/directory_management.sh"

# Main script execution
cd "../../"

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