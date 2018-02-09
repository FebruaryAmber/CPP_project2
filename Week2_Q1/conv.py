#!/usr/bin/python

import sys
import string
T = set(['C', 'c', 'f', 'F'])
T =str(raw_input("Celsius or Fahrenheit: "))
if T == ( "c" or "C"):
    ci = int(input("Celsius: "))
    fo = (9.0 / 5.0) * ci + 32
    print(fo)
elif T == ("f" or "F"):
    fi = int(input("Fahrenheit: "))
    co = (5.0 / 9.0) * (fi -32)
    print(co)
else:
    print("Prongram error!")

