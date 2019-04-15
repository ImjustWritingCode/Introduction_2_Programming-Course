## 11761 - Determinant

### Description

Writer: *jjjjj19980806*       Description: *pclightyear*        Difficulty: ★★★☆☆

In linear algebra, the [determinant](http://en.wikipedia.org/wiki/Determinant) (行列式) is a useful value that can be computed from the elements of a square matrix. The determinant also has many useful properties. For example: Assume we have a square matrix **A**. Then the determinant of **A** equals to zero if and only if **A** is not invertible.

Given a **n** × **n** square matrix **A**, you have to calculate the determinant of **A**. (Denoted by **det(A)**)

------

Note: 

(1) We can define the determinant of a 2 × 2 matrix as below:

![img](https://acm.cs.nthu.edu.tw/media/uploads/2017/12/28/1.png)

(2) We can calculate the determinant of a 3 × 3 matrix as below:

![img](https://acm.cs.nthu.edu.tw/media/uploads/2017/12/28/2_vQrXVKk.png)

### Input

The first line contains one integer **n**, representing the size of **A**.

The next n lines contains n integers **aij**, representing each entry in **A**.

It is guaranteed that :

- **1 ≤ n ≤ 8**
- **-16 ≤ aij ≤ 15**

Note that det(A) may exceed **INT.**

### Output

Please output a line contains the value of det(A).