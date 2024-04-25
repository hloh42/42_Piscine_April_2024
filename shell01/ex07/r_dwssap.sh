#!/bin/bash

# Define start and end line numbers
START=${FT_LINE1}
END=${FT_LINE2}

# Process the /etc/passwd file
awk -F':' '{
    # Remove comments
    if ($1 ~ /^[^#]/) {
        # Store login names
        logins[NR] = $1
    }
}
END {
    # Print every other line starting from the second, reverse it, sort, and slice between START and END
    for (i = 2; i <= NR; i += 2) {
        print logins[i]
    }
}' /etc/passwd | \
rev | \
sort -r | \
awk "NR >= $START && NR <= $END" | \
tr '\n' ',' | \
sed 's/,$/./' | \
sed 's/,/, /g'
