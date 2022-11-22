#include <iostream>

using namespace std;

bool isProst(int a)
{
    for (int i = 2; i < a; i++)
        if (a % i == 0)
            return false;

    return true;
}

int main()
{
    int n;
    do
    {
        cout << "Unesite n: ";
        cin >> n;
    } while (n<10 || n>1000);

    int brojac = 0;

    for (int i = 0; i < n; i++)
    {
        int br = rand() % 1000 + 1;
        if (isProst(br))
            brojac++;
        
    }
    cout << "Procenat prostih brojeva je " << (double(brojac) / n) * 100;

    system("pause>0");
    return 0;
}
