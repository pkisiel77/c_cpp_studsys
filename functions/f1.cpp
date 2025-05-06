#include <iostream>
using namespace std;

float add(float a, float b = 1)
{
    return a + b;
}

void my_print(string text)
{
    cout << text << endl;
}

int a()
{
    return 1;
}

int main()
{
    float a, b;

    my_print("Podaj a");
    cin >> a;
    my_print("Podaj b");
    cin >> b;

    float ret = add(a, b);

    cout << a << " + " << b << " = " << ret << endl;

    // int, float, double, long, char, bool

    return 0;
}
