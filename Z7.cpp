#include <iostream>

using namespace std;

bool daLiSePojavljuje(int cifra, int broj)
{
    while (broj)
    {
        if (broj % 10 == cifra)
            return true;
        broj /= 10;
    }
    return false;
}

int kreirajC(int A, int B)
{
    int C = 0;
    while (A > 0)
    {
        if (!daLiSePojavljuje(A % 10, B))
        {
            C *= 10;
            C += A % 10;
        }
        A /= 10;
    }
    return C;
}

int main()
{
    int A,B;
    do
    {
        cin >> A;
    } while (A<=100000);

    do
    {
        cin >> B;
    } while (B <= 50000);

    int C = kreirajC(A, B);
    cout << "A - C = " << A << " - " << C << " = " << A - C;

    system("pause>0");
    return 0;
}
