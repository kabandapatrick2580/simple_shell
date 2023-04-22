#!/bin/bash



echo "simple shell of command lines with arguments."

if [$# -eq 0]; then
	echo "No arguments"
	exit 1
fi

for arg in "$@"
do
	echo "Argument: $arg"
	done
