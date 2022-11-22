#include <iostream>

using namespace std;

int noviBroj(int broj)
{
    int novi = 0;
    int i = 0;
    while (broj)
    {
        if ((broj % 10) % 2 == 0)
            novi += 5 * pow(10, i);
        else
            novi += (broj % 10) * pow(10, i);
        i++;
        broj /= 10;
    }
    return novi;
}

int main()
{
    int n;
    do
    {
        cout << "Unesite n: ";
        cin >> n;
    } while (n<=0);

    int noviBr = noviBroj(n);
    cout << n << " - " << noviBr << " = " << n - noviBr;

    system("pause>0");
    return 0;
}
