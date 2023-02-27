#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

BTNode* BuyNode(datatype val)
{
	BTNode* newnode = NULL;
	BTNode* tmp = (BTNode*)malloc(sizeof(BTNode));
	if (!tmp)
	{
		perror("malloc");
		return NULL;
	}
	newnode = tmp;
	newnode->left = newnode->right = NULL;
	newnode->val = val;
	return newnode;
}

BTNode* CreateTree()
{
	BTNode* n1 = BuyNode(1);
	BTNode* n2 = BuyNode(2);
	BTNode* n3 = BuyNode(3);
	BTNode* n4 = BuyNode(4);
	BTNode* n5 = BuyNode(5);
	BTNode* n6 = BuyNode(6);

	n1->left = n2;
	n1->right = n4;

	n2->left = n3;

	n4->left = n5;
	n4->right = n6;

	return n1;
}

BTNode* FindNode(BTNode* root, datatype val)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->val == val)
	{
		return root;
	}
	BTNode* leftret = FindNode(root->left, val);
	BTNode* rightret = FindNode(root->right, val);

	if (leftret)
	{
		return leftret;
	}
	if (rightret)
	{
		return rightret;
	}
	return NULL;
}

