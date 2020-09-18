#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pole_prostokat.py



def main(args):
    bok1 = int(input("Podaj pierwszy bok: "))
    bok2 = int(input("Podaj drugi bok: "))
    pole = bok1 * bok2
    print("Pole prostokąta wynosi", pole)
    obw = bok1 + bok2 + bok1 + bok2
    print("Obwód prostokąta wynosi", obw)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
