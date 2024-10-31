#!/bin/bash

source "../modules/colors.sh"

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
        color=$CYAN
    fi

    printf "\r${color}[%s%s] %d%%\e[0m" "$bar" "$empty" "$percent"
    sleep 0.1
}
