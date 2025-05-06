#include <iostream>
#include <cstdarg>

using namespace std;

// Funkcja ze zmiennymi argumentami (variadic arguments) - styl C
void suma(int count, ...)
{
    va_list args;
    va_start(args, count);
    int sum = 0;

    for (int i = 0; i < count; ++i)
    {
        sum += va_arg(args, int);
    }

    va_end(args);
    std::cout << "Suma: " << sum << std::endl;
}

// łączenia łańcuchów znaków str + str + str ...
void my_concat(int count, ...)
{
    va_list args;
    va_start(args, count);

    string cc = "";

    for (int i = 0; i < count; ++i)
    {
        string str = va_arg(args, const char*);
        cout << "index = " << i << " " << str << "\n";
        cc += str + "%";
    }
    // cc.pop_back();
    cc = cc.substr(0, cc.length() - 1);

    va_end(args);
    cout << "My concat =  " << cc << endl;
}

int main()
{
    suma(6, 1, 2, 3, 4, 10, -5);
    my_concat(3, "ala", "ma", "kota");
    return 0;
}