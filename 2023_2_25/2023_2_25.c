#define _CRT_SECURE_NO_WARNINGS 1
#include "binarytree.h"

BTNode* root = NULL;

//二叉树的遍历
	//前序、中序、后序遍历


//二叉树的高度

//二叉树的叶子节点的个数

//第k层节点个数

int main()
{
	root = CreateTree();
	PreOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");

	return 0;
}