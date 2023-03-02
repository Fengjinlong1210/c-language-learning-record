#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"
#include "Queue.h"

BTNode* BTBuyNode(BTdatatype val)
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

BTNode* NewTree()
{
	BTNode* n1 = BTBuyNode(1);
	BTNode* n2 = BTBuyNode(2);
	BTNode* n3 = BTBuyNode(3);
	BTNode* n4 = BTBuyNode(4);
	BTNode* n5 = BTBuyNode(5);
	BTNode* n6 = BTBuyNode(6);
	BTNode* n7 = BTBuyNode(7);
	BTNode* n8 = BTBuyNode(8);

	n1->left = n2;
	n1->right = n3;

	n2->left = n4;
	n2->right = n5;

	n3->left = n6;
	n3->right = n7;

	n5->left = n8;

	return n1;
}

BTNode* CreateTree(char* str, int* pi)
{
	//遍历字符串，构建二叉树
	if (str[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}

	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	if (!root)
	{
		perror("malloc root");
		exit(-1);
	}
	
	root->val = str[(*pi)++];
	root->left = CreateTree(str, pi);
	root->right = CreateTree(str, pi);

	return root;
}

void LevelTraverse(BTNode* root)
{
	//用队列实现层序遍历
	if (root == NULL)
	{
		return;
	}
	//创建并初始化队列，然后把根放入队列中
	Qptr QL;
	InitQueue(&QL);
	QueuePush(&QL, root);
	
	//当队列不为空时
	//取出最前面的结点数据后删除
	//往队列中加入被删除结点的子结点
	//直到结点被删为空

	while (!QueueEmpty(&QL))
	{
		BTNode* front = QueueFront(&QL);
		printf("%c ", front->val);
		QueuePop(&QL);

		if (front->left)
		{
			QueuePush(&QL, front->left);
		}
		if (front->right)
		{
			QueuePush(&QL, front->right);
		}
	}
	QueueDestroy(&QL);
}

bool CompleteBinaryTree(BTNode* root)
{
	//判断完全二叉树利用层序遍历
	//遇到NULL时停下来，检查NULL后面是不是全为NULL
	if (root == NULL)
	{
		return true;
	}
	Qptr QL;
	InitQueue(&QL);
	//从头开始入队
	QueuePush(&QL, root);
	while (!QueueEmpty(&QL))
	{
		BTNode* front = QueueFront(&QL);
		QueuePop(&QL);

		if (!front)
		{
			break;
		}
		else
		{
			QueuePush(&QL, front->left);
			QueuePush(&QL, front->right);
		}
	}

	while (!QueueEmpty(&QL))
	{
		BTNode* front = QueueFront(&QL);
		if (front)
		{
			QueueDestroy(&QL);
			return false;
		}
		QueuePop(&QL);
	}
	QueueDestroy(&QL);
	return true;

}

void BinaryTreeDestory(BTNode* root)
{
	//后序遍历删除
	if (!root)
	{
		return;
	}
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
}