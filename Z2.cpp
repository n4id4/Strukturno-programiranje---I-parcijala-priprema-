#include <iostream>
#include <cmath>	
using namespace std;

int main()
{
	int broj = 0;
	int cifra;
	do
	{
		cout << "Upisi cifru: "; 
		cin >> cifra;
		if (cifra <= 9 && cifra >= 0)
		{
			broj *= 10;
			broj += cifra ;
			
		}
		else if(cifra>9)
			cout << "Cifra nije validna\n";
		
	} while (cifra>=0);

	cout << "Broj sastavljen od zadanih cifara je: " << broj << ".";

	system("pause>0");
	return 0;
}
