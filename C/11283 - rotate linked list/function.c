#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void rotateList (Node** head, int swp)
{
	Node *tmp = *head, *last = *head;
	swp--;
	while (swp--) tmp = tmp -> next;
	while (last -> next != NULL) last = last -> next;
	last -> next = *head;
	*head = tmp -> next;
	tmp -> next = NULL;
	return;
}