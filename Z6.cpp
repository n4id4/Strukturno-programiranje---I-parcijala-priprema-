#include <iostream>

using namespace std;

int faktorijel(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;
    return f;
}

int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n<=10);

    int S = 0;
    for (int i = 1; i <=n; i++)
    {
        if(i%2!=0)
            S += faktorijel(3 * i);
        else
            S-= faktorijel(3 * i);
    }

    system("pause>0");
    return 0;
}
