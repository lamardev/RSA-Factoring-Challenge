#!/usr/bin/python3

import sys

def main():
    file = sys.argv[1]
    count = 2
    with open(file, "r") as f:
        for line in f:
            num = int(line)
            while ( (num % count) != 0 and count <= num):
                count += 1
            print("{}={}*{}".format(num, num//count, count))
main()
