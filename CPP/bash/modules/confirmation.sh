#!/bin/bash

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
            echo "Invalid input, please enter 'y' or 'n'"
        fi
    done
}
