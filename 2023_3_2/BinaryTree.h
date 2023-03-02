#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int BTdatatype;

typedef struct BinaryTreeNode
{
	BTdatatype val;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BTBuyNode(BTdatatype val);

//二叉树的构建及遍历
BTNode* CreateTree(char* str, int* pi);

//二叉树的层序遍历
void LevelTraverse(BTNode* root);

//判断二叉树是否是完全二叉树
bool CompleteBinaryTree(BTNode* root);

//二叉树的销毁
void BinaryTreeDestory(BTNode* root);