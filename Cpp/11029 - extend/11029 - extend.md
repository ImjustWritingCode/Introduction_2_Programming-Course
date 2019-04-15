## 11029 - extend

### Description

Given an integer sequence, say {6, 1, 4, 3, 5, 2}, we can choose any pair of two neighboring numbers (in a circular sense) and swap them to generate a new sequence. For example,

If we choose 6 and 2, we get {2, 1, 4, 3, 5, 6} after swapping.
If we choose 1 and 4, we get {6, 4, 1, 3, 5, 2} after swapping.

Try to generate all possible results for the original sequence, and print the results in lexicographical order. For the example above, the output would be

1 6 4 3 5 2
2 1 4 3 5 6
6 1 3 4 5 2
6 1 4 3 2 5
6 1 4 5 3 2
6 4 1 3 5 2

Hint:

1. Use the set and vector containers.
2. The items in a set will be automatically sorted in lexicographical order.

### Input

An integer sequence, separated by spaces. End by EOF.

### Output

List all possible results for the original sequence in lexicographical order.

Each line contains one sequence, where there is a space between each number.

 Note that there is a '\n' at the end of each line.