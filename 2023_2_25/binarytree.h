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

//�����ڵ�
BTNode* BuyNode(datatype val);

//���Ӷ�����
BTNode* CreateTree();

//ǰ�����
void PreOrder(BTNode* root);

//�������
void InOrder(BTNode* root);

//�������
void PostOrder(BTNode* root);