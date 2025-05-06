#include <iostream>
#include <string>

using namespace std;

// Funkcja pomocnicza - koniec rekurencji
void my_print() {
    cout << endl;
}

// Funkcja szablonowa przyjmująca dowolną liczbę argumentów
template<typename T, typename... Args>
void my_print(const T& first, const Args&... rest)
{
    cout << first;
    if constexpr (sizeof...(rest) > 0) {
        cout << " "; // opcjonalnie spacja między argumentami
    }
    my_print(rest...); // wywołanie rekurencyjne
}

int main()
{
    string text;

    my_print("Ala ma kota");
    my_print("Podaj tekst:");
    getline(cin, text);
    my_print("Nowy tekst =", text);  // wiele argumentów, bez konkatenacji

    return 0;
}