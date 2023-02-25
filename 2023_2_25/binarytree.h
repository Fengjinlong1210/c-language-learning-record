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

//创建节点
BTNode* BuyNode(datatype val);

//链接二叉树
BTNode* CreateTree();

//前序遍历
void PreOrder(BTNode* root);

//中序遍历
void InOrder(BTNode* root);

//后序遍历
void PostOrder(BTNode* root);