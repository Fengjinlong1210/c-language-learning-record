#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct BinaryTreeNode
{
	datatype val;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyNode(datatype val);

BTNode* CreateNode();

//遍历
void PreOrder(BTNode* root);

void InOrder(BTNode* root);

void PostOrder(BTNode* root);

//叶子节点个数
int LeavesCount(BTNode* root);

//层数
int TreeHeight(BTNode* root);

//查找
BTNode* FindNode(BTNode* root, datatype val);

//第k层节点数
int NodeOfKLevel(BTNode* root, int k);
