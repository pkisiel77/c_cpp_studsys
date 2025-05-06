// https://www.youtube.com/watch?v=HqsEHG0QJXU&ab_channel=CppCon

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T1, typename T2>
void showPair(T1 arg1, T2 args, string arg3)
{
    cout << arg1 << " " << args << " " << arg3 << endl;
}

template <typename T = int>
T multiply(T a, T b)
{
    cout << sizeof(T) << endl;
    cout << typeid(T).name() << endl;
    
    return a * b;
}

int main()
{
    /*
    cout << add(3, 4) << endl;
    cout << add(3.5, 2.1) << endl;
    cout << add(1.0,3.78) << endl;
    */
    cout << multiply(3, 4) << endl; 
    cout << multiply(3.9, 2.1) << endl;
    cout << multiply<double>(3, 2.1) << endl;
    /*
    showPair(1, 2.5, "Hello");
    showPair(1.5, 2, "World");
    showPair(1, 2, "C++");
    */
    return 0;
}
