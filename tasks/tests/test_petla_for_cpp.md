# Test z języka C++: Pętla `for`

Zakreśl **poprawną lub poprawne** odpowiedź w każdym pytaniu.

---

### Pytanie 1
Który z poniższych fragmentów kodu wypisze liczby od 1 do 5?

A) `for (int i = 0; i <= 5; i++) std::cout << i << " ";`  
B) `for (int i = 1; i <= 5; i++) std::cout << i << " ";`  
C) `for (int i = 1; i < 5; i++) std::cout << i << " ";`  
D) `for (int i = 5; i >= 1; i--) std::cout << i << " ";`

---

### Pytanie 2
Jaki będzie wynik działania tego kodu?

```cpp
for (int i = 0; i < 3; i++) std::cout << i * 2 << " ";
```

A) `0 2 4`  
B) `2 4 6`  
C) `0 1 2`  
D) `0 2 6`

---

### Pytanie 3
Która konstrukcja pętli jest nieskończoną pętlą `for`?

A) `for (int i = 0; i < 10; i++) {}`  
B) `for (;;) {}`  
C) `for (int i = 0; i > -1; i++) {}`  
D) `for (int i = 10; i > 0; i--) {}`

---

### Pytanie 4
Ile razy zostanie wykonane ciało pętli?

```cpp
for (int i = 5; i < 5; i++) std::cout << i;
```

A) 0  
B) 1  
C) 5  
D) Nieskończoność

---

### Pytanie 5
Jakie liczby wypisze poniższy kod?

```cpp
for (int i = 10; i > 5; i -= 2) std::cout << i << " ";
```

A) `10 8 6`  
B) `10 9 8 7 6`  
C) `10 7 4`  
D) `10 8 6 4`

---

### Pytanie 6
Który fragment kodu wypisze liczby parzyste od 0 do 8?

A) `for (int i = 0; i <= 8; i += 2)`  
B) `for (int i = 2; i < 10; i++)`  
C) `for (int i = 0; i < 8; i++)`  
D) `for (int i = 8; i >= 0; i--)`

---

### Pytanie 7
Który z poniższych zapisów wypisze "C++" dokładnie 3 razy?

A) `for (int i = 1; i < 3; i++)`  
B) `for (int i = 0; i < 3; i++)`  
C) `for (int i = 0; i <= 3; i++)`  
D) `for (int i = 1; i <= 4; i++)`

---

### Pytanie 8
Który z operatorów modyfikuje zmienną sterującą pętlą `for`?

A) `*`  
B) `==`  
C) `++`  
D) `&&`

---

### Pytanie 9
Co zostanie wypisane?

```cpp
for (int i = 3; i > 0; i--) std::cout << i << " ";
```

A) `1 2 3`  
B) `3 2 1`  
C) `0 1 2`  
D) `3 1`

---

### Pytanie 10
Która pętla ma błąd składni?

A) `for (int i = 0; i < 5; i++) std::cout << i;`  
B) `for int i = 0; i < 5; i++) std::cout << i;`  
C) `for (;;) break;`  
D) `for (int i = 10; i > 0; i--) {}`

---

### Pytanie 11
Co zostanie wypisane?

```cpp
for (int i = 1; i <= 3; ++i) std::cout << i * i << " ";
```

A) `1 2 3`  
B) `1 4 9`  
C) `2 4 6`  
D) `1 2 4`

---

### Pytanie 12
Który zapis wypisze "Hello" dokładnie 5 razy?

A) `for (int i = 0; i < 5; i++)`  
B) `for (int i = 1; i <= 5; i++)`  
C) `for (int i = 0; i < 6; i++)`  
D) `for (int i = 1; i < 6; i++)`

---

### Pytanie 13
Jakie będą wartości `i` w poniższej pętli?

```cpp
for (int i = 2; i <= 10; i += 2)
```

A) `2 4 6 8 10`  
B) `2 4 6 8`  
C) `1 2 3 4 5`  
D) `0 2 4 6 8`

---

### Pytanie 14
Co wypisze ten kod?

```cpp
for (int i = 0; i < 4; i++) {
    if (i == 2) continue;
    std::cout << i << " ";
}
```

A) `0 1 2 3`  
B) `0 1 3`  
C) `1 3`  
D) `0 1 2`

---

### Pytanie 15
Co oznacza `continue` w pętli `for`?

A) Przerywa całą pętlę  
B) Wychodzi z programu  
C) Pomija bieżącą iterację  
D) Wykonuje dodatkową iterację

---

### Pytanie 16
Który z kodów wypisze liczby nieparzyste od 1 do 9?

A) `for (int i = 1; i < 10; i += 2)`  
B) `for (int i = 1; i < 10; i++)`  
C) `for (int i = 0; i < 10; i += 2)`  
D) `for (int i = 1; i <= 9; i *= 2)`

---

### Pytanie 17
Ile razy wykona się poniższa pętla?

```cpp
for (int i = 3; i <= 9; i += 3)
```

A) 2  
B) 3  
C) 4  
D) 5

---

### Pytanie 18
Co wypisze poniższy kod?

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
        std::cout << i << j << " ";
    }
}
```

A) `00 01 10 11 20 21`  
B) `0 1 2`  
C) `00 01 02 10 11 12`  
D) `00 10 20`

---

### Pytanie 19
Która pętla wypisze cyfry w odwrotnej kolejności od 9 do 0?

A) `for (int i = 9; i >= 0; i--)`  
B) `for (int i = 0; i < 10; i--)`  
C) `for (int i = 9; i >= 0; i++)`  
D) `for (int i = 9; i > 0; i--)`

---

### Pytanie 20
Co się stanie, jeśli w pętli `for` zabraknie warunku zakończenia?

```cpp
for (int i = 0;; i++) std::cout << i;
```

A) Kompilator zgłosi błąd  
B) Program wypisze tylko raz `0`  
C) Pętla wykona się tylko 10 razy  
D) Pętla będzie nieskończona

---
