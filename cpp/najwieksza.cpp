/*
 * najwieksza.cpp
 * Program,który pobiera od użytkownika 3 liczby i drukuje największą
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
float liczba1, liczba2, liczba3;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    cout << "Podaj trzecia liczbe: ";
    cin >> liczba3;
    
    cout << "Najwieksza liczba to: ";
   
    if(liczba1 > liczba2 && liczba1 > liczba3) cout << liczba1;
    if(liczba2 > liczba1 && liczba2 > liczba3) cout << liczba2;
    if(liczba3 > liczba1 && liczba3 > liczba2) cout << liczba3;
  


	
	return 0;
}

