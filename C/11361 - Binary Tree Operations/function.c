#include <stdio.h>
#include "function.h"

void showPostorder (Node *root)
{
	if (root -> left != NULL) showPostorder (root->left);
	if (root -> right != NULL) showPostorder (root->right);
	printf("%d ", root -> data);
	return;
}

Node* buildTree (int* inorder, int* preorder, int inorder_start, int inorder_end)
{
    static int preorder_idx = 0;
	int inorder_idx;
    if(inorder_start > inorder_end)
        return NULL;
    Node *tree_node = (Node*) malloc (sizeof(Node));
	tree_node -> data = preorder[preorder_idx++];
	tree_node -> left = tree_node -> right = NULL;
    if(inorder_start == inorder_end)
        return tree_node;

	for (inorder_idx = inorder_start;inorder_idx <=inorder_end;inorder_idx++)
		if (inorder[inorder_idx] == tree_node->data) break;

    tree_node->left = buildTree(inorder, preorder, inorder_start, inorder_idx-1);
    tree_node->right = buildTree(inorder, preorder, inorder_idx+1, inorder_end);

    return tree_node;
}