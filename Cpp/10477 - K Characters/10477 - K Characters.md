## 10477 - K Characters

### Description

Given a string **S**, output all different possible set of K characters in the string. And sort them in the dictionary order.

For example, if **K**=2 and the given string **S** is ‘**CDBABBD**’, output

AB
AC
AD
BB
BC
BD
CD
DD

### Input

The first line of input contains a positive integer **T** (**T** <= 30), which indicates the number of test cases. For each case, there is a string **S** and a positive integer **K** in a line. The length of the **S** is less than or equal to 100 and  **S** contains only 'A'-'K'; The number **K**, less than or equal to 10, indicates the length of substrings.

For test 1: **T** <= 10, **K** <= 3,   |**S**| <=10
For test 2: **T** <= 15, **K** <= 5,   |**S**| <=25
For test 3: **T** <= 20, **K** <= 8,   |**S**| <=50
For test 4: **T** <= 30, **K** <= 10, |**S**| <=100

**T**, **K**, |**S**| are all positive integers, and **K** <= |**S**| for all test cases.

### Output

For each test case, output all different possible set of K characters in the string. And sort them in the dictionary order, one substring per line. Print a blank line **after** each test case.