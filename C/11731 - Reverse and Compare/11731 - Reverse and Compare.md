## 11731 - Reverse and Compare

### Description

Source: AtCoder Grand Contest       Writer: tourist       Difficulty: ★★★★★

Given a string ***S*** consisting of lowercase English letters, you can choose any two indices ***i*** and ***j*** such that 1 **≤ i ≤ j** **≤** **| S |**and reverse substring S[i..j].

If you can perform this operation at most once, how many different strings can you obtain?

------

For example, if S = 'aatt':

You can obtain 'aatt' (don't do anything), 'atat' (reverse S[2..3]), 'atta' (reverse S[2..4]), 'ttaa' (reverse S[1..4]) and 'taat' (reverse S[1..3]).

### Input

The input contains only one string **S**.

It is guaranteed that :

- **1 ≤ | S | ≤ 2×10^5**
- **S consists of lowercase letters.**

### Output

Please output the number of different strings you can obtain by reversing any substring in **S** at most once.

