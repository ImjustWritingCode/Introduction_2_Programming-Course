## 11480 - Parentheses Matching

### Description

A string is said to be valid if it matches one of the following rules:

　(1) The string is an empty string.

　(2) If a string S is valid, then {S}, [S], (S) and <S> are valid.

　(3) If strings S1 and S2 are both valid, then S1S2 is valid.

Given a string consisting of parentheses, determine if it is a valid string.

### Input

The first line of the input contains an integer N (N ≤ 10000) denoting the number of test cases followed by. Each of the next N lines corresponds to a test case, which contains a string consisting of parentheses, and the maximum string length will be no more than 1000. Note that an empty string (a line which contains the newline character only) may be contained in the input and it should be considered as a valid string according to rule (1).

 

Case 1 : N≤50

Case 2 : N≤100

Case 3 : N≤1000

Case 4 : N≤10000

### Output

For each test case, print “Case *i*:” and then “Yes” or “No” to indicate that the string is valid or not, separated by a space character. *i* is the test case number starting from 1.