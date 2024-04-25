#!/bin/bash

# Count the total number of directories and regular files, including hidden ones
total_count=$(find . | wc -l | sed 's/ //g')

# Display the count with a dollar sign at the end for 'cat -e'
echo "${total_count}$"

