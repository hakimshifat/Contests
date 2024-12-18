#!/bin/bash

# Delete files with extensions matching in*, ans*, or out*
find . -type f \( -name "*.in*" -o -name "*.ans*" -o -name "*.out*" \) -exec rm -v {} \;

echo "Deleted all files with extensions matching 'in', 'ans', or 'out'."

