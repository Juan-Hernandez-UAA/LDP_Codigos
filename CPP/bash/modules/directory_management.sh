#!/bin/bash

# Function to create directories and template files
create_directories() {
    local create_files=$1
    local folders_number=$2
    local destination_folder=$3

    source_file="./bash/templates/cpp.cpp"
    file_name="main.cpp"

    for ((i = 1; i <= folders_number; i++)); do
        directory_name="S$i"
        mkdir -p "$destination_folder/$directory_name" # Create the directory

        clon_file="$destination_folder/$directory_name/$file_name"

        if [[ "$create_files" == true ]]; then
            cp "$source_file" "$clon_file"
        fi

        # Update the progress bar
        progress_bar $i $folders_number
    done
    echo -e "\nAll $folders_number directories created successfully!"
}
