#!/bin/bash

# Set the input file name
input_file="/home/luca/TapirCorrectnessTest/logs/full.txt"

# Extract the second value (v) from lines where m is 'w', sort them, and check for duplicates
awk -F'[(),]' '$1 == "w" {print $3}' "$input_file" | sort | uniq -d > duplicates.txt

if [[ -s duplicates.txt ]]; then
    echo "Duplicates found for v values in lines where m is 'w':"
    cat duplicates.txt
else
    echo "All v values are unique for lines where m is 'w'."
fi

# Clean up the duplicates file if you don't need to keep it
rm duplicates.txt
