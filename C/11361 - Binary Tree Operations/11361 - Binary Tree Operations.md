## 11361 - Binary Tree Operations

### Description

This is a partial judge problem (Judge Language :  C)

Please download the partial judge code and header.

Then, implement 2 functions : buildTree() and showPostorder()

You have to build the binary tree according to its inorder and preorder.

Next , print out the postorder of the binary tree!



Submit format:

> \#include <stdio.h>
>
> \#include <stdlib.h>
>
> \#include "function.h"
>
> Node* buildTree(int* inorder, int* preorder, int inorder_start, int inorder_end){
>
> ​        /*YOUR CODE HERE*/
>
> }
>
> void showPostorder(Node* root){
>       /*YOUR CODE HERE*/
>
> }

### Input

There are 3 lines for inputs.

The first line contains an integer N , which indicates the number of nodes of the binary tree.

The second line is the inorder traversal of the binary tree

The third line is the preorder traversal of the binary tree

※Note that there are not duplicated integers in the binary tree

### Output

Print out the postorder traversal of the binary tree.

Note that :

1.There is an whitespace between each integer. 

2.There is an whitespace after the last integer.

3.Threre is no need to add "\n" at last 



###Reminder: This is a partial judge code. It mean that only "function.c" is my design. Big thanks to TAs of the class for the rest of the codes!