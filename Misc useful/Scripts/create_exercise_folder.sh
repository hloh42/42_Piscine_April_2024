#!/bin/bash

# Prompt the user to input the number of folders
read -p "Enter the number of folders to create: " num_folders

# Check if input is a valid number
if ! [[ "$num_folders" =~ ^[0-9]+$ ]]; then
    echo "Error: Please enter a valid number."
    exit 1
fi

# Loop to create folders in ex00, ex01, ... format
for ((i = 0; i < num_folders; i++)); do
    # Use printf to format the folder name with leading zeros
    folder_name=$(printf "ex%02d" "$i")
    mkdir "$folder_name"
done

echo "Exercise Folders created successfully."

