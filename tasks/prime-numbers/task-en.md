# Task: Check if a Number is Prime

## Description

A **prime number** is a natural number greater than 1 that has exactly two divisors: **1** and **itself**.  
Examples of prime numbers: `2, 3, 5, 7, 11, 13, 17`, etc.

---

## How to check if a number `n` is prime?

1. If `n < 2`, then it is **not** a prime number.
2. Check whether `n` is divisible by any integer from `2` to `√n`:
   - If you **find a divisor**, then `n` is **not** prime.
   - If **no divisors are found**, then `n` **is** prime.

---

## Why is it enough to check up to √n?

If `n` has a divisor greater than `√n`, it must also have a corresponding divisor smaller than `√n`.  
For example, if `n = a * b` and `a > √n`, then `b < √n`.  
So it's enough to check up to the square root of `n`.

---
