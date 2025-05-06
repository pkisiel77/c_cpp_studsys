#include <iostream>
#include <limits>
using namespace std;

// Wskaźnik to zmienna, która przechowuje adres pamięci innej zmiennej.
// Wskaźniki są używane do dynamicznego przydzielania pamięci, przekazywania argumentów do funkcji przez referencję oraz do manipulacji danymi w pamięci.
// Wskaźnik można zadeklarować w następujący sposób:
// int* ptr; // wskaźnik do zmiennej typu int
// Wskaźnik można zainicjować adresem zmiennej za pomocą operatora &:
// int x = 10;
// int* ptr = &x; // ptr przechowuje adres zmiennej x
// Wskaźnik można dereferencjonować za pomocą operatora *:

int main()
{
    int x = 10;
    unsigned int y = 10;

    // &x pobiera adres pamięci zmiennej x
    // ptr to wskaźnik na int, który przechowuje adres x
    int* ptr = &x;

    // * - dereferencja, & referencja
    // *ptr dereferencjonuje wskaźnik ptr, co oznacza, że uzyskujemy wartość zmiennej, na którą wskazuje ptr

    cout << "x=" << x << endl;
    cout << "&x=" << &x << endl;
    cout << "ptr=" << ptr << endl;
    cout << "*ptr=" << *ptr << endl;

    return 0;
}
