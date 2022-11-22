#include <iostream>
#include <cmath>	
using namespace std;

bool isProst(int broj)
{
    for (int i = 2; i < broj / 2; i++)
        if (broj % i == 0)
            return false;

    return true;
}

void goldbach(int n1, int n2)
{
    if (n1 % 2 != 0) 
        n1++;
    do
    {
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= n1; j++)
            {
                if (isProst(i) && isProst(j))
                {
                    if (i + j == n1)
                    {
                        cout << i << " + " << j << " = " << n1 << endl;
                        n1 += 2;
                        break;
                    }
                }

            }

            if (n1 >= n2) break;

        }

    } while (n1 < n2);
}

int main()
{
    int n1, n2;

    do
    {
        cout << "Unesite 2 broja: " << endl;
        cin >> n1 >> n2;

    } while (n1 <= 0 || n2 <= 0);

    if (n1 > n2)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    goldbach(n1,n2);

	system("pause>0");
	return 0;
}
