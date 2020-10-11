#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle_cw4.py
#  
#  Copyright 2020 Karol <Karol@DESKTOP-EDM589B>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  


def main(args):
	
	m=int(input("Podaj liczbę początkową: "))
	n=int(input("Podaj liczbę końcową: "))
	liczba = 0
	
	for liczba in range(m, n):
		if liczba >= 10:
			if liczba % 2 == 0:  
				if liczba % 3 == 0:  
					print(liczba)

	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

