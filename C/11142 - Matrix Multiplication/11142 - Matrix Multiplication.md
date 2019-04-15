## 11142 - Matrix Multiplication

### Description

Compute **C** = **A** × **B**, where **A**, **B** and **C** are matrices of size *n* × *m*, *m* × *p*, and *n* × *p*, respectivily.

### Input

There are multiple (≤50) test cases in each data set.

Each case begins with a line of three integers *n*, *m* and *p*, which denote the dimensions of the matrices defined in the problem description. Each of the following *n* lines contains *m* integers *a**ij*, representing the elements in matrix **A**, and then *m* lines of *p* integers *b**ij*, representing the elements in matrix **B**.

There is a blank line between two successive test cases, and the input is terminated by end-of-file.

 

For data set #1, 1 ≤ *n*, *m*, *p* ≤ 5 and |*aij*|, |*bij*| ≤ 30.

For data set #2, 1 ≤ *n*, *m*, *p* ≤ 20 and |*aij*|, |*bij*| ≤ 500.

For data set #3, 1 ≤ *n*, *m*, *p* ≤ 50 and |*aij*|, |*bij*| ≤ 7000.

For data set #4, 1 ≤ *n*, *m*, *p* ≤ 100 and |*aij*|, |*bij*| ≤ 10000.

### Output

For each test case, output *n* lines of *p* integers representing the elements of matrix **C**.

Please use single space to seperate two successive elements in the same line, and do not output any leading or trailing space characters.

Also, please output a blank line after each matrix.