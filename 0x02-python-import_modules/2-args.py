#!/usr/bin/python3
import sys
if __name__ == "__main__":
    num_args = len(sys.argv) - 1
    arguments = sys.argv[1:]
    
    for index, arg in enumerate(arguments):
        print("{}: {}".format(index, arg))
