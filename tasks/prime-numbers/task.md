# Zadanie: Sprawdzenie, czy liczba jest pierwsza

## Opis

Liczba pierwsza to taka liczba naturalna większa od 1, która ma dokładnie dwa dzielniki: **1** oraz **sama siebie**.  
Przykłady liczb pierwszych: `2, 3, 5, 7, 11, 13, 17` itd.

---

## Jak sprawdzić, czy dana liczba `n` jest liczbą pierwszą?

1. Jeśli `n < 2`, to **nie** jest liczbą pierwszą.
2. Sprawdź, czy `n` dzieli się przez jakąkolwiek liczbę całkowitą od `2` do `√n`:
   - Jeśli **znajdziesz taki dzielnik**, to `n` **nie** jest liczbą pierwszą.
   - Jeśli **nie znajdziesz żadnego dzielnika**, to `n` **jest** liczbą pierwszą.

---

## Dlaczego wystarczy sprawdzać tylko do √n?

Jeśli liczba `n` ma dzielnik większy niż `√n`, to musi mieć też drugi dzielnik mniejszy niż `√n`,  
ponieważ każdy dzielnik większy od pierwiastka tworzy z parą `n / i` drugi, mniejszy dzielnik.

---
