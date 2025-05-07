#include <iostream>
#include <cmath>  // do funkcji sqrt

using namespace std;

bool isPrimeWithSqrt(int n) 
{
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); ++i) 
    {  
        if (n % i == 0)
            return false;  // znaleziono dzielnik
    }
    return true;  // brak dzielników
}

bool isPrimeWithoutSqrt(int n) 
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; ++i) 
    {
        if (n % i == 0)
            return false;  // znaleziono dzielnik
    }
    return true;  // brak dzielników
}

int main() {

    return 0;
}
