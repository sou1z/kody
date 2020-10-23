#include <iostream>
using namespace std;


void srednia(float suma, float iloscliczb){
    float srednia = suma / iloscliczb;
    cout <<"Œrednia wynosi: "<< srednia <<endl;
}



void med(float *tab, int iloscliczb){
    float med;
    if(iloscliczb % 2 ==0){
        med = (tab[iloscliczb/2 - 1]+tab[iloscliczb/2])/2;
    } else {
        med = tab[iloscliczb/2];
    }
    cout <<"Mediana wynosi: " << med << endl;
}


int main(int argc, char **argv)
{

	int t =0;
	int iloscliczb =0;
	int *tab = new int [iloscliczb];
	cout <<"Iloœæ liczb: ";
	cin >>iloscliczb;

	if(iloscliczb >20){
		cout <<"Maksymalna iloœæ ocen wynosi 20" <<endl;
		return 0;
}

	float tablica[iloscliczb];
	int suma = 0;
	for (int i = 0; i < iloscliczb; ++i)
    {
		cout <<"Podaj ocenê  "<<(i+1)<<" : ";
		cin >>tablica[i];
		if(tablica[i] <1 || tablica[i] >6){
			cout <<"Wprowadzono niepoprawn¹ ocenê"<<endl;
			return 0;
        }
		suma += tablica[i];
    }
	int v;
	int x;
	for(v=0;v<iloscliczb;v++)
    	{
			for(x=v+1;x<iloscliczb;x++)
    		{
    			if(tablica[v]>tablica[x])
    			{
    				t  =tablica[v];
    				tablica[v]=tablica[x];
    				tablica[x]=t;
    			}
    		}
    	}
    srednia(suma, iloscliczb);
    med(tablica, iloscliczb);


	return 0;
}
