#include <stdio.h>
#include "function.h"

void inorder (Node *root)
{
	if (root -> left != NULL) inorder (root->left);
	printf("%d ", root -> data);
	if (root -> right != NULL) inorder (root->right);
	return;
}

void postorder (Node *root)
{
	if (root -> left != NULL) postorder (root->left);
	if (root -> right != NULL) postorder (root->right);
	printf("%d ", root -> data);
	return;
}