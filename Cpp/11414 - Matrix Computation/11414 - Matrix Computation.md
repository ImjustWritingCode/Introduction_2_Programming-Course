## 11414 - Matrix Computation

### Description

Create a class **Matrix** to represent an N x N matrix.

![img](https://acm.cs.nthu.edu.tw/media/uploads/2017/04/21/matrix.png)

Provide public member functions that perform or derive:

1. Interchanging two rows.
2. Rotating Matrix by 90° clockwise.
3. Rotating Matrix by 90° counter clockwise.
4. Checking if Matrix is symmetric or not. If yes, print “yes”, otherwise, print “no”.

Hint:

- Symmetric

A matrix A = (aij) is symmetric if its entries are symmetric with respect to the main diagonal, that is, aij = aji, for all indices i and j.

The following 3 x 3 matrix is symmetric:

1 7 3

7 4 -5

3 -5 6

### Input

The first line contains an integer *N* (2<=*N*<=50), which means the size of the matrix. The total number of elements in the matrix is thus *N* x *N*.

For the next *N* lines, each line contains *N* integers, specifying the elements of the matrix.

The last line has two integers, which mean two row indices for performing row exchange.

All of the integers in the same line are separated by a space.

### Output

Print out the corresponding results with a new line character at the end of each result.



###Reminder: This is a partial judge problem. Therefore, only "function.c" is my design. Thanks to hardworking TAs of the class offer the rest of the code!