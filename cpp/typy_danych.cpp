/*
 * typy_danych.cpp
 * 
 * Copyright 2020 Karol <Karol@DESKTOP-EDM589B>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	short unsigned int a;
	int b;
	long int c;
	//typy całkowite
	cout << a << " " << sizeof(a) <<endl;
	cout << b << " " << sizeof(b) <<endl;
	cout << c << " " << sizeof(c) <<endl;
	
	char z = 'a';
	cout << z << " " << (int)z << sizeof(z) << endl;
	
	float d = 0;
	double e = 0;
	//typy rzeczywiste
	cout << d << " " << sizeof(d) <<endl;
	cout << e << " " << sizeof(e) <<endl;
	
	
	cout << "Użycie tablic: " << endl;
	//typy złożone
	int ile = 5;
	int tab[ile]; //deklaracja tablicy
	for (int i = 0; i<ile; i++){
		cout << "Podaj " << i+1 << "liczbę " << endl;
		cin >> tab[i];
	}
	
	cout << "Zawartość tablicy: " << endl;
	for (int i = 0; i<ile; i++){
		cout << "Indeks " << i << "Wartość:  " << tab[i] << endl;
		cin >> tab[i];
	}
	
	return 0;
}

