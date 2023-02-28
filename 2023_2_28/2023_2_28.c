#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

int main()
{
	BTNode* root = CreateNode();
	//PreOrder(root);
	//printf("\n");
	//InOrder(root);
	//printf("\n");
	//PostOrder(root);
	//printf("\n");
	//int ret = LeavesCount(root);
	//printf("%d \n", ret);
	//int ret = TreeHeight(root);
	//printf("%d \n", ret);
	//BTNode* ret = FindNode(root, 9);
	//if (ret)
	//{
	//	printf("%d\n", ret->val);
	//}
	//else
	//{
	//	printf("NULL\n");
	//}
	int ret = NodeOfKLevel(root, 3);
	printf("%d\n", ret);

	return 0;
}