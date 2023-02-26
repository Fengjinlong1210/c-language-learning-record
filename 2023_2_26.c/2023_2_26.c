#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

int main()
{
	BTNode* root = CreateTree();
	//PreOrder(root);
	//printf("\n");
	//InOrder(root);
	//printf("\n");

	//PostOrder(root);
	//printf("\n");
	int height = BinaryTreeHeight(root);
	printf("%d \n", height);

	int count = LeavesCount(root);
	printf("%d \n", count);

	int size = LevelKSize(root, 3);
	printf("%d \n", size);

	BTNode* ret = FindBTNode(root, 3);
	printf("%d\n", ret->val);
	return 0;
}