#include <iostream>

using namespace std;

int main()
{
	float v = 0, g = 9.81, s = 0;
	int t = 0;
	for (int i = 1; i <= 20; i++)
	{
		t = i * 3;
		v = g * t;
		s = (g / 2) * pow(t, 2);
		cout << "Situacija u " << i * 3 << "-oj sekundi je: " << endl;
		cout << "Brzina: " << v << endl;
		cout << "Predjeni put: " << s<<endl;
	}

    system("pause>0");
    return 0;
}
