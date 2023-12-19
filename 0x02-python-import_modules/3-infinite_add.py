#!/usr/bin/python3
import sys
if __name__ == "__main__":
    num_args = len(sys.argv)
    arguments = sys.argv[1:]

    if num_args == 0:
        print("0")
    elif num_args > 1:
        numbers = []
        for arg in arguments:
            number = int(arg)
            numbers.append(number)
        total_sum = sum(numbers)
        print(total_sum)
