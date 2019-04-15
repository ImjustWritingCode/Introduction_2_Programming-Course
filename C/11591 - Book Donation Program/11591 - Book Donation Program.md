## 11591 - Book Donation Program

### Description

Twilight Sparkle is an aspiring pony lives in Equestria. She has a large collection of books, all of which are stored in bookcases in her house. For each bookcase, the books stored in it is labelled 1, 2, 3, .... and so on.

One day, she decides to participate in a book donation program. For each bookcase in her house, she wants to pick up one book for donation.

Here is how Twilight chooses the books :

Each time she will ask her friend Spike to give her **two random number x and n**. Twilight wants to find out the **n-th smallest prime p that is equal or greater than x**. For this bookcase, Twilight will then pick up the book labelled **p** for donation.

Since Twilight is not good at mathematics, she asks you to write a program to calculate the answer of all bookcases. If the program is correct, Twilight will be happy and she may teach you some magic tricks.

### Input

First line contains one integer **T**, representing the number of the bookcases.

The next T lines contains two integers **x**, **n**, representing the two numbers Spike gives to Twilight.

**1 <= T <= 100**

**1 <= x <= 105**

**1 <= n <= 1000**

### Output

For each bookcase, please output a line contains one integer **p**, representing the label of the book that is donated.