## 11760 - C - Stable Sort

[Status](https://acm.cs.nthu.edu.tw/status/?pid=11760)  |  Limits [Submit](https://acm.cs.nthu.edu.tw/users/submit/11760)

### Description

Writer: *jjjjj19980806*       Description: *pclightyear*        Difficulty: ★★☆☆☆

Given a list of students and their score, you have to sort their score in decreasing order.

If there are many students with the same score, you need to maintain their relative order in the original list.

That is, if whenever there are two students **A** and **B** with the same score and with **A** appearing before **B** in the original list, **A** will appear before **B** in the sorted list.

Reference: [https://en.wikipedia.org/wiki/Category:Stable_sorts](https://en.wikipedia.org/wiki/Category:Stable_sorts)

### Input

The first line contains one integer **n**, representing the number of students.

The next n lines contain a string and an integer **si** and **ai**, representing the name of each student and his/her score.

It is guaranteed that :

- **n ≤ 10^5**
- **1 ≤ | si | ≤ 20**
- **0 ≤ aij ≤ 100**

 

### Output

After sorting, please output the list of students' names, each name with a line.