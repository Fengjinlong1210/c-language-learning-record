#define _CRT_SECURE_NO_WARNINGS 1
#include "binarytree.h"

BTNode* root = NULL;

//�������ı���
	//ǰ�����򡢺������


//�������ĸ߶�

//��������Ҷ�ӽڵ�ĸ���

//��k��ڵ����

int main()
{
	root = CreateTree();
	PreOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");

	return 0;
}