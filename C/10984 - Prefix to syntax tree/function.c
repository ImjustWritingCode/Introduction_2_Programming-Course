#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void constructTree(Node** head) {
    if ((*head) == NULL) *head = (Node*)malloc(sizeof(Node));
    char input = getchar();
    if(input=='\n') return;
    if(input == '|' || input == '&') {
        (*head)->data = input;
        (*head)->left = (*head)->right = NULL;
        constructTree (&((*head) -> left));
        constructTree (&((*head) -> right));
    } else if(input >= 'A' && input<= 'D') {
        (*head)->data = input;
        (*head)->left = (*head)->right = NULL;
    }
    return;
}