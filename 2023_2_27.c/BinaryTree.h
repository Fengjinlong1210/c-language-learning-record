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

BTNode* CreateTree();

//¶þ²æÊ÷²éÕÒ
BTNode* FindNode(BTNode* root, datatype val);
