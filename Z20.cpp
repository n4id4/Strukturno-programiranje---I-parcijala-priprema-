#include <iostream>
using namespace std;



bool prost(int a) {
    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}



int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a < 10 || b < a + 20);
    if (a % 2 != 0)
    {
        a++;
    }
    for (int i = a; i <= b; i += 2)
    {
        //cout << i<<endl;
        for (int j = i /2, k = i / 2; j < i; j ++, k --)
        {
            if (prost(j) && prost(k))
            {
                cout << i << " = " << j << " + " << k << endl;
                break;
            }
        }
    }
    return 0;

}
