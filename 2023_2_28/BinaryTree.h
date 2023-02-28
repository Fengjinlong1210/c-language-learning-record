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

//����
void PreOrder(BTNode* root);

void InOrder(BTNode* root);

void PostOrder(BTNode* root);

//Ҷ�ӽڵ����
int LeavesCount(BTNode* root);

//����
int TreeHeight(BTNode* root);

//����
BTNode* FindNode(BTNode* root, datatype val);

//��k��ڵ���
int NodeOfKLevel(BTNode* root, int k);
