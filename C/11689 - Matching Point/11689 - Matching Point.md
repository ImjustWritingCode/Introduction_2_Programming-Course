## 11689 - Matching Point

### Description

Writer : *jjjjj19980806*       Description : *pclightyear*       Difficulty : ★★★☆☆

> *"Speak low when you speak love."*
>
> *― William Shakespeare, Much Ado About Nothing*

YJ is recently crushing on our beloved aspiring professor HT (She doesn't want to admit it, though). One day, HT was teaching about some properties of [subsequence](https://en.wikipedia.org/wiki/Subsequence). During the class, HT randomly wrote down some strings on the whiteboard. Every time HT wrote down a string ***s***, YJ would randomly wrote down a string ***t*** immediately (she loves HT, after all). YJ then wanted to calculate the "matching point" of ***s*** and ***t*** (HT and YJ). Matching point, according to YJ, is defined as the number of subsequences in ***s*** that is exactly the same as ***t***.

------

For example, if ***s*** = abcabc and ***t*** = abc, the matching point of ***s*** and ***t*** is four, and the position of each subsequence is shown as below.

abcabc

abcabc

abcabc

abcabc

------

If you can help YJ solve her problem, maybe she will send you some photos of HT that she took during the class.

### Input

There are **multiple lines** in each testcase.

Each line contains two strings **si**, ***ti***, representing the string HT wrote and the string YJC wrote.

It is guaranteed that :

- **At most 10 lines in each testcase.**
- **1 ≤ | si |, | ti | ≤ 20**

**The input will end with EOF**

### Output

For each ***si*** and ***ti***, please output a line contains one integer representing the matching point of si and ti (HT and YJ).