## 10949 - Find Maximum in a binary tree

In this assignment, you have to find the maximum value in a binary tree.

The idea of solving this problem is to find the maximum value in the left sub-tree, find maximum in the right sub-tree, compare it with the root data and select the one that gives the maximum value. Like this,

max{root, max of left subtree, max of right subtree}

All other function are provided. You only need to implement the function maxValue,

​        int maxValue(Node *root)

​        which gets the pointer of the tree root and returns the maximum value.

 

​       You will be provided with main.c and function.h, and asked to implement function.c.

​        For OJ submission:

​        Step 1. Submit only your maxValue into the submission block. (Please choose C compiler)

​        Step 2. Check the results and debug your program if necessary.

### Input

The first line will have a number N with the number of tree node, second and third line are inorder and preorder of a tree respectively.

Notice that all the values are different.

### Output

The maximum of a binary tree.



##Reminder: I designed "function.c" only.