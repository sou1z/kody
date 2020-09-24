/*
 * alf_warunkowy.cpp
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int w;
	
	w = 0; //deklaracja i inicjacja => definicja

	cout<<"Liczba punktów: ";
	cin >> w;
	
	if (w < 0 || w > 60) {
		cout<<"Błędne dane";
	return 0;
}

	if (w<20)
		cout<<"Grupa podstawowa";
	else if (w <= 40) 
		cout<<"Grupa średniozaawansowana";
	else
		cout<<"Grupa zaawansowana";
	
	
	return 0;
	
}

