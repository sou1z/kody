/*
 * pole_kwadrat.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int bok1;  
	int bok2;       
	int pole;
	int obw;
	cout << "Podaj pierwszy bok prostokąta: ";
	cin >> bok1;
	cout << "Podaj drugi bok prostokąta: ";
	cin >> bok2;
	pole = bok1 * bok2;
	obw = bok1+bok1+bok2+bok2;
	cout << "Pole prostokąta wynosi: " << pole << endl;
	cout << "Obwód prostokąta wynosi: " << obw;
	
	
	return 0;
}
