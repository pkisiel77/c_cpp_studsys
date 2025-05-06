#include <iostream>
#include <string>

using namespace std;

void my_print(const string &text)
{
    cout << text << endl;
}

int main()
{
    string text;

    my_print("Ala ma kota");
    my_print("Podaj tekst");
    getline(cin ,text);
    string newText = "Nowy tekst = " + text;
    my_print(newText);

    return 0;
}