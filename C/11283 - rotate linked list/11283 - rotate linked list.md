## 11283 - rotate linked list

### Description

Given a link list structure named Node.

 

typedef struct _Node {

​    int data;

​    struct _Node *next;

} Node;

 

Given a list, rotate the list to the left by *k* places, where *k* is non-negative and k is smaller than the count of nodes in linked list.

For example: 
Given `1->2->3->4->5->NULL` and *k* = `3`, 
return `4->5->1->2->3->NULL`.

 

### Input

The input contains 2 sequence of positive integers.The first sequence is to create a linked list of integers, except the last one, which is -1, indicating the end of the sequence. The second line is an integer *k.* 

### Output

The output contains the sequence of resulting linklist.



###Reminder: This is a partial judge code. It means that only "function.c" is my design. Special thanks to TAs of the class for the rest of the codes!