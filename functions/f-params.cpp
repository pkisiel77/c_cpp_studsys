#include <iostream>

using namespace std;

// string == char *
// string == char []

void changeText(string &text)
{
    text = "function changeText";
}

void showText(const string &text)
{
    string newText = text + " - newText";
    cout << newText << endl;
    cout << text << endl;
}


int main() 
{
    string text = "function main";

    cout << text << endl;
    changeText(text);
    cout << text << endl;

    return 0;
}
