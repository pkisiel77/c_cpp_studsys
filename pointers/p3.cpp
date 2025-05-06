#include <iostream>
using namespace std;

int main()
{
    int arr[][3] = { {10, 20, 30}, {40, 50, 60} };

    // Wskaźnik do tablicy jednowymiarowej zawierającej 3 elementy typu int
    int (*ptr)[3] = arr;

    cout << sizeof(int) << endl;
    
    cout << "Pierwszy element tablicy: " << *(*ptr) << endl;
    cout << ptr << " " << *ptr << endl;
    cout << "Drugi element tablicy: " << *(*ptr + 1) << endl;
    cout << "Trzeci element tablicy: " << *(*ptr + 2) << endl;
    cout << "Czwarty element tablicy: " << *(*(ptr + 1) + 0) << endl;
    cout << "Piąty element tablicy: " << *(*(ptr + 1) + 1) << endl;
    cout << "Szósty element tablicy: " << *(*(ptr + 1) + 2) << endl;

}
