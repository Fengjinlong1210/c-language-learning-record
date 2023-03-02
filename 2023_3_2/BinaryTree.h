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

//�������Ĺ���������
BTNode* CreateTree(char* str, int* pi);

//�������Ĳ������
void LevelTraverse(BTNode* root);

//�ж϶������Ƿ�����ȫ������
bool CompleteBinaryTree(BTNode* root);

//������������
void BinaryTreeDestory(BTNode* root);