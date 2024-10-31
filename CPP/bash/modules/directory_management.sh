#!/bin/bash

# Function to create directories and template files
create_directories() {
    local create_files=$1
    local folders_number=$2
    local destination_folder=$3

    for ((i = 1; i <= folders_number; i++)); do
        echo $(pwd)

        directory_name="S$i"
        mkdir -p "$destination_folder/$directory_name" # Create the directory

        # Update the progress bar
        progress_bar $i $folders_number

        # Uncomment and customize this section if you want to create template files
        if [[ "$create_files" == true ]]; then
            touch "$destination_folder/$directory_name/example.txt"
            # Add your code to create template files here
        fi
    done
    echo -e "\nAll $folders_number directories created successfully!"
}
