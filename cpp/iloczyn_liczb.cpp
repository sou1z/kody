/*
 * suma_parzyste.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int iloczyn, i, a;
	// "liczba" to zmienna sterująca
	
	
	
	iloczyn = 1;
	
	for(i = 0; i<10; i++){
		cout << "Podaj liczbę: ";
		cin >> a;
		iloczyn = iloczyn * a;
	}
	cout << iloczyn;
	
	return 0;
}

