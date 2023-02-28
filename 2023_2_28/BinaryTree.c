#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

BTNode* BuyNode(datatype val)
{
	BTNode* tmp = (BTNode*)malloc(sizeof(BTNode));
	BTNode* newnode = NULL;
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

BTNode* CreateNode()
{
	BTNode* n1 = BuyNode(1);
	BTNode* n2 = BuyNode(2);
	BTNode* n3 = BuyNode(3);
	BTNode* n4 = BuyNode(4);
	BTNode* n5 = BuyNode(5);
	BTNode* n6 = BuyNode(6);
	BTNode* n7 = BuyNode(7);
	BTNode* n8 = BuyNode(8);
	BTNode* n9 = BuyNode(9);


	n1->left = n2;
	n1->right = n5;
	n2->left = n3;
	n2->right = n4;
	n5->left = n6;
	n5->right = n7;
	n7->left = n8;
	n8->left = n9;
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

void InOrder(BTNode* root)
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

int LeavesCount(BTNode* root)
{
	//叶子节点个数
	//如果结点为空直接返回0
	//如果结点的子节点都为空，说明该结点为叶子结点
	//如果子结点不为空，说明还没有找到最后一层，需要继续向下递归
	if (root == NULL)
	{
		return 0;
	}

	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	else
	{
		return LeavesCount(root->left) + LeavesCount(root->right);
	}
}

int TreeHeight(BTNode* root)
{
	//树的高度：分割成最大的子树的高度 + 1
	//需要记录子树的高度，否则成倍加大计算量
	//返回子树中高度较大的
	if (root == NULL)
	{
		return 0;
	}
	int leftH = TreeHeight(root->left);
	int rightH = TreeHeight(root->right);
	
	return leftH > rightH ? leftH + 1 : rightH + 1;

}

BTNode* FindNode(BTNode* root, datatype val)
{
	//如果root结点不是要查找的结点，就向子结点递归
	//如果子结点没有找到，返回NULL

	//前序遍历查找
	if (root == NULL)
	{
		return NULL;
	}

	//先判断root结点是否使要查找的结点
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

int NodeOfKLevel(BTNode* root, int k)
{
	//分割成查找子结点开始的k-1层节点个数
	//如果k == 1，说明已经到达第k层
	//如果k > 1，还需要继续向第k层靠近

	if (root == NULL)
	{
		return 0;
	}


	if (k == 1)
	{
		return 1;
	}
	else
	{
		return NodeOfKLevel(root->left, k - 1) + NodeOfKLevel(root->right, k - 1);
	}
}
