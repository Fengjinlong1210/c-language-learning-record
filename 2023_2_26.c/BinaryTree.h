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

//�������
BTNode* BuyNode(datatype val);

//���ӽ��
BTNode* CreateTree();

//ǰ�����
void PreOrder(BTNode* root);

//�������
void InOrder(BTNode* root);

//�������
void PostOrder(BTNode* root);

//�������ĸ߶�
int BinaryTreeHeight(BTNode* root);

//������Ҷ�ӽڵ�ĸ���
int LeavesCount(BTNode* root);

//��k��Ľڵ���
int LevelKSize(BTNode* root, int k);

//����val���ҽ��
BTNode* FindBTNode(BTNode* root, datatype val);