#!/bin/python

import math
import os
import random
import re
import sys

# Complete the findDigits function below.
def findDigits(n):

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())

    for t_itr in xrange(t):
        n = int(raw_input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
