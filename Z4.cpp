#include <iostream>

using namespace std;

long unsigned int obrni(long unsigned int broj)
{
    long unsigned int noviBroj = 0;
    while (broj)
    {
        int cifra = broj % 10;
        if (cifra % 2 != 0) 
            noviBroj = 10 * noviBroj + cifra;

        broj /= 10;
    }

    return noviBroj;
}

int main()
{
    long unsigned int A = 0;
    while (A < 100000)
    {
        cout << "Unesite broj: ";
        cin >> A;
    }

    long unsigned int B = obrni(A);
    cout << A - B << endl;

    system("pause>0");
    return 0;
}
