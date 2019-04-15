## 10950 - Tree Traversal

### Description

Given a binary tree, print the inorder and postorder of the tree.

There are three common ways to traverse a binary tree recursively: inorder, preorder, and postorder. Each way contains three steps:

1. Visit the root (V)
2. Traverse the left subtree recursively (L)
3. Traverse the right subtree recursively (R)

The difference of the three ways is the order of steps, inorder is LVR, preorder is VLR, and postorder is LRV. For example, the three traversal sequences of the tree below are as follows:

![img](https://acm.cs.nthu.edu.tw/media/uploads/2016/03/01/treeorder_0bS4zvh.jpg)

This problem will give you the inorder and preorder sequences to build a tree, and you have to write two recursive functions to print the inorder and postorder of the tree.

You will be provided with main.c and function.h. main.c contains the implementation of functions which build a tree by the inorder and preorder, and function.h contains the definition of tree node. You only need to implement inorder(Node *root) and postorder(Node *root) in function.c.

For OJ submission:

​       Step 1. Submit only your function.c into the submission block.(Please choose C compiler)

​       Step 2. Check the results and debug your program if necessary.

### Input

The input contains three lines. The first line is the number of nodes in the tree. The second line is the inorder and the third line is the preorder of the tree.

### Output

The output contains two sequences of integers. The first sequence is the inorder and the second sequence is the postorder of the tree.

**Notice that there is a space after every integer.**



##Reminder: I designed "function.c" only.