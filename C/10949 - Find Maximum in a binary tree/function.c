#include <stdio.h>
#include "function.h"

int maxValue (Node *tree)
{
	int tmp = tree -> data;
	if (tree -> left != NULL)
		if (tmp < maxValue(tree->left)) tmp = maxValue(tree->left);
	if (tree -> right != NULL)
		if (tmp < maxValue(tree->right)) tmp = maxValue(tree->right);
	return tmp;
}