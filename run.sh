#!/bin/bash

# Check if a file path was provided
if [ -z "$1" ]; then
    echo "Usage: $0 <source_file.cpp>"
    exit 1
fi

SOURCE="$1"
TARGET="solution"

CXX_FLAGS="-O3 -g -Wall -Wextra -Wpedantic -std=c++20 -fsanitize=address,undefined -fno-sanitize-recover=all -D_GLIBCXX_DEBUG -DLOCAL"

echo "Compiling $SOURCE..."

if g++ $CXX_FLAGS "$SOURCE" -o "$TARGET"; then
    echo "=== Compilation Successful ==="
    echo "----------------------------------------"

    # Automatically use input.txt or in.txt if available, otherwise run interactively
    if [ -f "input.txt" ]; then
        ./"$TARGET" < input.txt
    elif [ -f "in.txt" ]; then
        ./"$TARGET" < in.txt
    else
        ./"$TARGET"
    fi

    echo "----------------------------------------"
else
    echo "=== Compilation Failed ==="
    exit 1
fi
