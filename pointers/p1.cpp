#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p = &x;

    cout << "Wartość x: " << x << endl;
    cout << "Adres x: " << p << endl;
    cout << "Adres x: " << &x << endl;
    cout << "Wartość przez wskaźnik: " << *(p) << endl;
    cout << "Wartość przez wskaźnik: " << *(&x) << endl;
    
    *p = 20;
    cout << "Nowa wartość x: " << x << endl;

    return 0;
}
