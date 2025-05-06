#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    // smart pointer
    // *(ptr) <=> arr[0]

    // 0x16ceeec20 = 615,145,820
	// 0x16ceeec24 = 615,145,828
    // 8B = 8 bytes

    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    cout << "sizeof(ptr) = " << sizeof(ptr) << endl;
    cout << "sizeof(*ptr) = " << sizeof(*ptr) << endl;

    *(ptr + 1) = -35;

    cout << *(ptr) << " " << "address = " << ptr << endl;
    cout << *(ptr + 1) << " " << "address = " << ptr + 1 << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;
    cout << *(ptr + 5) << endl;
    // cout << *(ptr + 1000000000000) << endl; // segmentation fault
    // Accessing out-of-bounds elements is undefined behavior.
    // Ensure all array accesses are within valid bounds.
    cout << "------------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}