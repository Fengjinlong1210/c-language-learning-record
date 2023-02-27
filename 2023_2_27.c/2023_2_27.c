#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

int main()
{
	BTNode* root = CreateTree();
	BTNode* ret = FindNode(root, 6);
	if (ret)
	{
		printf("%d \n", ret->val);
	}
	return 0;
}