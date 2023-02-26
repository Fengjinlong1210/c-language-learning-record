#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;

typedef struct BinaryTreeNode
{
	datatype val;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

//创建结点
BTNode* BuyNode(datatype val);

//链接结点
BTNode* CreateTree();

//前序遍历
void PreOrder(BTNode* root);

//中序遍历
void InOrder(BTNode* root);

//后序遍历
void PostOrder(BTNode* root);

//二叉树的高度
int BinaryTreeHeight(BTNode* root);

//二叉树叶子节点的个数
int LeavesCount(BTNode* root);

//第k层的节点数
int LevelKSize(BTNode* root, int k);

//根据val查找结点
BTNode* FindBTNode(BTNode* root, datatype val);