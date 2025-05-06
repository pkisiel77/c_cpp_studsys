#include<iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

float add(float x, float y)
{
    return x + y;
}

void add(float &c, float x, float y)
{
    c = x + y;
}

void myPrint(int a, double b, const std::string& c) {
    std::cout << "int: " << a << ", double: " << b << ", string: " << c << std::endl;
}

int main()
{
    int a = 1, b = 2;

    int c = add(a, b);

    float a1 = 1.0, b1 = 1.9;

    float c1 = add(a1, b1);

    float c2;

    add(c2, a1, b1);

    cout << c << " " << c1 <<  " " << c2 << endl;

    return 0;
}
