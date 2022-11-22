#include <iostream>
#include <cmath>	
using namespace std;

int main()
{
	char odabir;
	float x;
	int m;

	cout << "Unesite x: ";
	cin >> x;
	cout << "Unesite m: ";
	cin >> m;

	do
	{
		cout << "Odaberite funkciju (sin-s ili cos-c): "; 
		cin >> odabir;
	} while (odabir!='c' && odabir!='s');

	float rez = 1;

	if (odabir == 'c')
		for (int i = 1; i <=m ; i++)
			rez += i / (cos(x / i) + x);
	else
		for (int i = 1; i <= m; i++)
			rez += i / (sin(x / i) + x);
	

	cout << "Rezultat je: " << rez;

	system("pause>0");
	return 0;
}
