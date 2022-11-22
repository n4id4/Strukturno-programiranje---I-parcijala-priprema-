#include <iostream>

using namespace std;

int sumaDjelilaca(int broj)
{
	int suma = 0;
	for (int i = 1; i <broj; i++)
		if (broj % i == 0)
			suma += i;
	
	return suma;
}

bool isSavrsen(int broj)
{
	return broj == sumaDjelilaca(broj);
}

int main()
{
	
	int n,m;
	cout << "Unesite n: ";
	cin >> n;
	cout << "Unesite m: ";
	cin >> m;

	for (int i = n; i <=m; i++)
		if (isSavrsen(i))
			cout << i<<endl;

    system("pause>0");
    return 0;
}
