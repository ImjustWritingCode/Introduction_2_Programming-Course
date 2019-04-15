## 11455 - Lexicographic Order

### Description

There is a list of English words. Output them in lexicographic order. We compare the first character of two strings S1and S2. If the ASCII code of the first character of S1 is smaller than the first character of S2, we said that S1 is smaller than S2. Otherwise, if their first characters are the same, we compare their second characters, so on so forth until we can determine their order.  If S1 is S2’s prefix, S1 is smaller than S2 and vice versa.

 

Hint: Because of large input size, please use scanf and printf for efficiency.

### Input

There are multiple test cases.  Each case begins with an integer *N* (1 <= *N* <= 1000) in a line, and then *N* words follow, each word in a line.  The maximum length of words is 50.  The alphabets are 26 small English letters ‘a’ to ‘z’. The input is terminated if *N* = 0.

### Output

For each test case, print the words in lexicographic order.    Print a blank line after each case.