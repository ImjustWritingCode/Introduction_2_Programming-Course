## 11408 - Polynomial Computation

### Description

Create a class **Polynomial**. The internal representation of a **Polynomial** is an array of terms. Each term contains a coefficient and an exponent, e.g., the term 2x4 has the coefficient 2 and the exponent 4.

 

Provide public member functions that perform each of the following tasks:

1. Adding two **Polynomial**.
2. Subtracting two **Polynomial**.
3. Multiplying two **Polynomial**.

### Input

There are four lines.

The first two lines represent the greatest power and the corresponding coefficients of the first polynomial.

The last two lines represent the greatest power and the corresponding coefficients of the second polynomial.

The greatest power is in the range of 0-25.

Note that the coefficients are in descending order and each element is separated by a space.

### Output

Output the coefficients of the sum, difference and product of these two polynomials in descending order.

If the result of coefficient is 0, just print it.

ex:

2

1 2 1

0

0

The answer will be :

1 2 1

1 2 1

0 0 0

Note that there is a new line character at the end of each answer.



###Reminder: This is a partial judge problem, which means that only "function.c" is my design. Special thanks to TAs of the class offering rest of the codes!