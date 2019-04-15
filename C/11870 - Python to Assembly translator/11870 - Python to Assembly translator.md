## 11870 - Python to Assembly translator

### Description

You need to implement a calculator. The input is a list of expressions consisting of integers, operators(+,-,*,/,=),**parentheses**, and three variables x, y, z; and the output is a list of assembly codes.

### Input

Contains mutiple expressions. Each expression is separated by a newline character ('\n').

The initial value of variables, x, y, and z, are stored in memory [0], [4], and [8] respectively. 

If you use the variable which isn't assigned the value before, you need to read those initial values.

After the evaluation of the assembly code, the answer of the variables x, y, z needs to be stored in the registers r0, r1, and r2 respectively.

 

※There will be only one line in each illegal testcase.

### Output

If the expression is illegal, your final output should be "EXIT 1". 

Namely , you don't need to write following codes if the expression is illegal 

​          printf("MOV r0 [0]\n"); 

​          printf("MOV r1 [4]\n"); 

​          printf("MOV r2 [8]\n"); 

Note: You need to output a list of assembly codes. This time the judge is using special judge, and your answer doesn't need to be as same as the sample output. You just need to ensure the final values which are stored in registers r0, r1, and r2 (the value of variables x, y ,and z) is correct.

※There must be a “\n” at the end of line.