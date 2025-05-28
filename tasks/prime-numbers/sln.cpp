#include <iostream>
#include <cmath>
using namespace std;

void lpierwsza(int n)
{
    int ans = false;
    cout << "Podaj liczbę: ";
    cin >> n;
    if (n >= 2)
    {
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << "Ta liczba nie jest liczba pierwsza \n";
                ans = true;
                break;
            }
        }
        if (!ans)
        {
            cout << "Liczba pierwsza. \n";
        }
    }
    else
    {
        cout << "Liczba za mała \n";
    }
}

int main()
{
    int n;
    int largePrime = 2147483647;
    lpierwsza(n);
}