# Test: Pętla `for` w języku C++

---

### **Pytanie 1**
Który z poniższych fragmentów kodu wypisze liczby od 1 do 5?

A)  
```cpp
for (int i = 0; i <= 5; i++) std::cout << i << " ";
```

B)  
```cpp
for (int i = 1; i <= 5; i++) std::cout << i << " ";
```

C)  
```cpp
for (int i = 1; i < 5; i++) std::cout << i << " ";
```

D)  
```cpp
for (int i = 5; i >= 1; i--) std::cout << i << " ";
```

**Prawidłowa odpowiedź:** B

---

### **Pytanie 2**
Jaki będzie wynik działania tego kodu?

```cpp
for (int i = 0; i < 3; i++) std::cout << i * 2 << " ";
```

A) `0 2 4`  
B) `2 4 6`  
C) `0 1 2`  
D) `0 2 6`  

**Prawidłowa odpowiedź:** A

---

### **Pytanie 3**
Która konstrukcja pętli jest nieskończoną pętlą `for`?

A)  
```cpp
for (int i = 0; i < 10; i++) {}
```

B)  
```cpp
for (;;) {}
```

C)  
```cpp
for (int i = 0; i > -1; i++) {}
```

D)  
```cpp
for (int i = 10; i > 0; i--) {}
```

**Prawidłowa odpowiedź:** B
***Odpowiedź C*** -> chociaż może wydawać się nieskończona, może się kiedyś zakończyć, jeśli int przepełni się i wróci do wartości ujemnych (choć to UB – undefined behavior). Nie jest to jawnie nieskończona pętla jak for(;;).

---

### **Pytanie 4**
Ile razy zostanie wykonane ciało pętli?

```cpp
for (int i = 5; i < 5; i++) std::cout << i;
```

A) 0  
B) 1  
C) 5  
D) Nieskończoność  

**Prawidłowa odpowiedź:** A

---

### **Pytanie 5**
Jakie liczby wypisze poniższy kod?

```cpp
for (int i = 10; i > 5; i -= 2) std::cout << i << " ";
```

A) `10 8 6`  
B) `10 9 8 7 6`  
C) `10 7 4`  
D) `10 8 6 4`  

**Prawidłowa odpowiedź:** A

---

### **Pytanie 6**
Który fragment kodu wypisze liczby parzyste od 0 do 8?

A)  
```cpp
for (int i = 0; i <= 8; i += 2) std::cout << i << " ";
```

B)  
```cpp
for (int i = 2; i < 10; i++) std::cout << i << " ";
```

C)  
```cpp
for (int i = 0; i < 8; i++) std::cout << i * 2 << " ";
```

D)  
```cpp
for (int i = 8; i >= 0; i--) std::cout << i << " ";
```

**Prawidłowa odpowiedź:** A

---

### **Pytanie 7**
Który z poniższych zapisów wypisze "C++" dokładnie 3 razy?

A)  
```cpp
for (int i = 1; i < 3; i++) std::cout << "C++ ";
```

B)  
```cpp
for (int i = 0; i < 3; i++) std::cout << "C++ ";
```

C)  
```cpp
for (int i = 0; i <= 3; i++) std::cout << "C++ ";
```

D)  
```cpp
for (int i = 1; i <= 4; i++) std::cout << "C++ ";
```

**Prawidłowa odpowiedź:** B

---

### **Pytanie 8**
Który z operatorów modyfikuje zmienną sterującą pętlą `for`?

A) `*`  
B) `==`  
C) `++`  
D) `&&`  

**Prawidłowa odpowiedź:** C

---

### **Pytanie 9**
Co zostanie wypisane?

```cpp
for (int i = 3; i > 0; i--) std::cout << i << " ";
```

A) `1 2 3`  
B) `3 2 1`  
C) `0 1 2`  
D) `3 1`  

**Prawidłowa odpowiedź:** B

---

### **Pytanie 10**
Która pętla ma błąd składni?

A)  
```cpp
for (int i = 0; i < 5; i++) std::cout << i;
```

B)  
```cpp
for int i = 0; i < 5; i++) std::cout << i;
```

C)  
```cpp
for (;;) break;
```

D)  
```cpp
for (int i = 10; i > 0; i--) {}
```

**Prawidłowa odpowiedź:** B

---
