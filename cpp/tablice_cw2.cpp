/*
 * tablice_cw2.cpp
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

void pobierzliczby1(int t1[]) {
	int liczba1 = 0;
	for (int i = 0; i<5; i++){
		cout << "Podaj liczbe: ";
		cin >> liczba1;
		t1[i] = liczba1;
	}
	
}
void pobierzliczby2(int t1[], int t2[]) {
	int liczba2 = 0;
	for (int i = 0; i<5; i++){
		cout << "Podaj liczbe: ";
		cin >> liczba2;
		t2[i] = liczba2;

}
}
float suma(int t1[], int t2[]){
	float suma1 = 0;
	float suma2 = 0;
	for (int i = 0; i<5; i++){
	suma1+= t1[i];
	
	suma2+=t2[i];
		
}
	return suma1, suma2;
}

int main(int argc, char **argv)
{
	int liczba1=5;
	int liczba2=5;
	int t1[liczba1];
	int t2[liczba2];
	cout << "Srednia pierwszej tablicy to " << suma1 << endl;

}

