#!/usr/bin/python3

def max_integer(my_list=[]):
    max_int = my_list[0]
    count = 0
    if not my_list:
        return None
    else:
        for num in my_list:
            if num > max_int:
                max_int = num
                count += 1
        print("Max: {}".format(max_int))
