#include <iostream>

using namespace std;

int obrniBroj(int broj)
{
    int novi = 0;
    while (broj)
    {
        novi *= 10;
        novi += (broj % 10); 
        broj /= 10;
    }
    return novi;
}

bool isProst(int broj)
{
    for (int i = 2; i < broj; i++)
        if (broj % i == 0)
            return false;

    return true;
}

bool provjera(int broj)
{
    return (broj == obrniBroj(broj) && isProst(broj) == true);
}

int main()
{
    int broj;
    do
    {
        cout << "Unesite broj: ";
        cin >> broj;
    } while (broj<=100);

    if (provjera(broj))
        cout << broj << " je ujedno i palindrom i prost broj";
    else
        cout << broj << " nije ujedno i palindrom i prost broj";

    system("pause>0");
    return 0;
}
