/*
 * czy_parzysta.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	 int liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;

    if (liczba%2==0) 
        cout << "Liczba jest parzysta" << endl;
    else{
        cout << "Liczba nie jest parzysta" << endl;
	}

	
	return 0;
}

