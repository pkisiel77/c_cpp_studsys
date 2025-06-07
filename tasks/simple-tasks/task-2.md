### 📘 **Zadania z C++ dla Początkujących**

Tematy: zmienne, funkcje, klasy, tablice, `std::vector`  
Poziom: podstawowy  
Liczba zadań: 10

---

#### 🔹 1. Zmienne – Kalkulator BMI

**Opis:**  
Napisz program, który pobiera od użytkownika wagę (w kg) i wzrost (w metrach), a następnie oblicza i wypisuje jego BMI.

**Wzór:**  
```cpp
BMI = waga / (wzrost * wzrost)
```

**Wskazówka:**  
Użyj typu `float` lub `double`.

---

#### 🔹 2. Funkcje – Liczba parzysta/nieparzysta

**Opis:**  
Napisz funkcję `bool czyParzysta(int liczba)`, która zwraca `true`, jeśli liczba jest parzysta i `false` w przeciwnym przypadku.

**Wskazówka:**  
Użyj operatora modulo `%`.

---

#### 🔹 3. Funkcje – Silnia

**Opis:**  
Napisz funkcję `int silnia(int n)`, która oblicza silnię liczby `n`.

**Wskazówka:**  
Użyj pętli lub rekurencji.

---

#### 🔹 4. Klasa – Punkt 2D

**Opis:**  
Zdefiniuj klasę `Punkt2D`, która zawiera dwie zmienne `x` i `y`. Dodaj konstruktor oraz metodę `wyswietl()`, która wypisuje współrzędne punktu.

**Wskazówka:**  
Użyj modyfikatora `public`.

---

#### 🔹 5. Klasa – Licznik

**Opis:**  
Zaimplementuj klasę `Licznik`, która przechowuje wartość licznika i posiada metody `zwieksz()`, `zmniejsz()` oraz `pobierzWartosc()`.

**Wskazówka:**  
Domyślnie licznik powinien zaczynać się od 0.

---

#### 🔹 6. Tablice – Średnia ocen

**Opis:**  
Napisz program, który pobiera od użytkownika 5 ocen (typu `int`), zapisuje je w tablicy i oblicza ich średnią.

**Wskazówka:**  
Tablica `int oceny[5]`.

---

#### 🔹 7. Tablice – Największy element

**Opis:**  
Znajdź największą liczbę w tablicy `int liczby[] = {4, 2, 9, 1, 7}`.

**Wskazówka:**  
Przejdź tablicę pętlą `for`.

---

#### 🔹 8. Vector – Suma elementów

**Opis:**  
Napisz program, który wczytuje od użytkownika liczby do `std::vector<int>` aż do podania liczby `0`, a następnie oblicza sumę elementów.

**Wskazówka:**  
Użyj `push_back()` i pętli `while`.

---

#### 🔹 9. Vector – Odwrócenie kolejności

**Opis:**  
Wczytaj `n` liczb do wektora, a następnie wypisz je w odwrotnej kolejności.

**Wskazówka:**  
Możesz użyć pętli od końca lub `std::reverse()`.

---

#### 🔹 10. Klasa i vector – Lista studentów

**Opis:**  
Zdefiniuj klasę `Student` z polami `imie` i `wiek`. W programie głównym utwórz `vector<Student>` i dodaj kilku studentów, a następnie wypisz ich dane.

**Wskazówka:**  
Pętla `for (const auto& s : studenci)`.
