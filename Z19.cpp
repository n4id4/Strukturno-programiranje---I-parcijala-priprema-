#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Unesite realan broj: ";
    cin >> x;
    
    int m;
    do
    {
        cout << "Unesite cijeli broj: ";
        cin >> m;
        
    }while(m < 0);
    
    char operacija;
    long double rezultat;
    do
    {
        cout << "Odaberite operaciju: " << endl
             << "s - Sabiranje" << endl
             << "o - Oduzimanje" << endl
             << "m - Mnozenje" << endl
             << "d - Dijeljenje" << endl;
        cin >> operacija;
             
        rezultat = (1 + x) / 1;
        switch(operacija)
        {
            case 's':
                for(int i = 2; i <= m; i++)
                    rezultat += (i + x) / i;
                break;
            case 'o':
                for(int i = 2; i <= m; i++)
                    rezultat -= (i + x) / i;
                break;
            case 'm':
                for(int i = 2; i <= m; i++)
                    rezultat *= (i + x) / i;
                break;
            case 'd':
                for(int i = 2; i <= m; i++)
                    rezultat /= (i + x) / i;
                break;
            default:
                cout << "Pogresna operacija pokusajte ponovo" << endl;
        }
        
    }while(operacija != 's' && operacija != 'o' && operacija != 'm' && operacija != 'd');
    
    cout << "Rezultat: " << rezultat << endl;
     
    return 0;
}
