/*
 * bez nazwy.cxx
 * Napisz program, który sprawdza, czy z trzech boków podanych
 * przez użytkownika, można zbudować trójkąt
 * Na końcu wyprowadź odpowiedni komunikat, np. "Da się" lub "nie da się"
 */


#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	float bok1;
	float bok2;
	float bok3;
	cout << "Podaj pierwszy bok trójkąta: ";
	cin >> bok1;
	cout << "Podaj drugi bok trójkąta: ";
	cin >> bok2;
	cout << "Podaj trzeci bok trójkąta: ";
	cin >> bok3;
	
/*	if(bok1+bok2>bok3){
		if(bok1+bok3>bok2){
			if(bok2+bok3>bok1){
				cout << "Da się";
			}else{
				cout << "Nie da się";
			}
		}else{
			cout << "Nie da się";
		}
	}else{
		cout << "Nie da się";
	}
	
*/
	if (bok1+bok2>bok3 && bok2+bok3>bok1 && bok1+bok3>bok2){
		cout << "da się";
	}
	else{
		cout << "nie da się";
	}
	return 0;
}

