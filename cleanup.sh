#!/bin/bash

# Delete files with extensions matching in*, ans*, or out*
find . -type f \( -name "*.in*" -o -name "*.ans*" -o -name "*.out*" -o -name "*.exe*" \) -exec rm -v {} \;

echo "Deleted all files with extensions matching 'in', 'ans', or 'out'."

