#include <iostream>
using namespace std;

namespace Algebra
{
    int square(int x)
    {
        // todo: implementacja
    }
}

namespace Geometry
{
    double square(double side)
    {
        // todo: implementacja
    }
}

// using namespace Algebra;
// using namespace Geometry;

int main()
{
    int liczba;
    double bok;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    cout << "Podaj długość boku kwadratu: ";
    cin >> bok;

    cout << "Kwadrat liczby: " << Algebra::square(liczba) << endl;
    cout << "Pole kwadratu: " << Geometry::square(bok) << endl;

    return 0;
}