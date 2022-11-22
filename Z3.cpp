#include <iostream>
#include <cmath>	
using namespace std;


int main()
{
	int kocka1, kocka2, kocka3;
	int brojac = 0;
	int brojacBacanja = 0;
	do
	{
		kocka1 = rand() % 6 + 1;
		kocka2 = rand() % 6 + 1;
		kocka3 = rand() % 6 + 1;

		cout << kocka1 << " " << kocka2 << " " << kocka3 << "\n";
		if (kocka1 == kocka2 && kocka2 == kocka3)
			brojac++;
		else
			brojac = 0;

		brojacBacanja++;
	} while (brojac<2);

	cout << "Ukupan broj bacanja je: " << brojacBacanja;

	system("pause>0");
	return 0;
}
