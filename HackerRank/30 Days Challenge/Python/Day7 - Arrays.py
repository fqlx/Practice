#!/bin/python3

import sys

n = int(input().strip())
arr = [int(i) for i in input().strip().split(' ')]
print(*arr[::-1], sep=' ')
