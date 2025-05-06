#include <iostream>

using namespace std;

void myFunction(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n"; // endl;
        myNumbers[i] += 2;
    }
}

void myFunctionConst(const int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n"; // endl;
        // myNumbers[i] += 2;
    }
}

class A{};


int main()
{
    A a;

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);

    cout << "===" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n"; // endl;
    }

    return 0;
}