#define _CRT_SECURE_NO_WARNINGS 1
#include "binarytree.h"

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

void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%d ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(BTNode * root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->val);

}