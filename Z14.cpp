#include <iostream>

using namespace std;

bool jeDjeljivSaCiframa(int broj)
{
    int temp = broj;
	while (temp)
	{
		int cifra = temp % 10;
		if(cifra!=0){
		if (broj % cifra != 0)
			return false;
		}
		temp /= 10;
	}
	return true;
}

int main()
{
	int x, y;
	do
	{
		cout << "Unesite x: ";
		cin >> x;
	} while (x<10 || x>6000);

	do
	{
		cout << "Unesite y: ";
		cin >> y;
	} while (y < 10 || y>6000);

	for (int i = x; i <= y; i++)
		if (jeDjeljivSaCiframa(i))
			cout << i<<endl;
	

    system("pause>0");
    return 0;
}
