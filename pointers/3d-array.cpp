#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int arr[2][3][4];

    int size_i = sizeof(arr) / sizeof(arr[0]);
    int size_j = sizeof(arr[0]) / sizeof(arr[0][0]);
    int size_k = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);
    cout << "Rozmiar tablicy 3D: " << size_i << " " << size_j << " " << size_k << endl;

    int counter = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                arr[i][j][k] = counter++;
            }
        }
    }

    // show the array using pointer arithmetic
    for (int i = 0; i < 2; i++)
    {
        cout << "Blok arr[" << i << "]:" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "  Wiersz " << j << ": ";
            for (int k = 0; k < 4; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << "--------" << endl;
    }

    int *p = &arr[0][0][0];
    for (int i = 0; i < 2 * 3 * 4; i++)
    {
        cout << p[i] << " ";
    }
}
