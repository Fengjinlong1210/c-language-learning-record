#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

BTNode* BuyNode(datatype val)
{
	BTNode* tmp = (BTNode*)malloc(sizeof(BTNode));
	BTNode* newnode = NULL;
	if (!tmp)
	{
		perror("malloc");
		return NULL;
	}
	newnode = tmp;
	newnode->left = newnode->right = NULL;
	newnode->val = val;
	return newnode;
}

BTNode* CreateNode()
{
	BTNode* n1 = BuyNode(1);
	BTNode* n2 = BuyNode(2);
	BTNode* n3 = BuyNode(3);
	BTNode* n4 = BuyNode(4);
	BTNode* n5 = BuyNode(5);
	BTNode* n6 = BuyNode(6);
	BTNode* n7 = BuyNode(7);
	BTNode* n8 = BuyNode(8);
	BTNode* n9 = BuyNode(9);


	n1->left = n2;
	n1->right = n5;
	n2->left = n3;
	n2->right = n4;
	n5->left = n6;
	n5->right = n7;
	n7->left = n8;
	n8->left = n9;
	return n1;
}

void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->val);
}

int LeavesCount(BTNode* root)
{
	//Ҷ�ӽڵ����
	//������Ϊ��ֱ�ӷ���0
	//��������ӽڵ㶼Ϊ�գ�˵���ý��ΪҶ�ӽ��
	//����ӽ�㲻Ϊ�գ�˵����û���ҵ����һ�㣬��Ҫ�������µݹ�
	if (root == NULL)
	{
		return 0;
	}

	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	else
	{
		return LeavesCount(root->left) + LeavesCount(root->right);
	}
}

int TreeHeight(BTNode* root)
{
	//���ĸ߶ȣ��ָ�����������ĸ߶� + 1
	//��Ҫ��¼�����ĸ߶ȣ�����ɱ��Ӵ������
	//���������и߶Ƚϴ��
	if (root == NULL)
	{
		return 0;
	}
	int leftH = TreeHeight(root->left);
	int rightH = TreeHeight(root->right);
	
	return leftH > rightH ? leftH + 1 : rightH + 1;

}

BTNode* FindNode(BTNode* root, datatype val)
{
	//���root��㲻��Ҫ���ҵĽ�㣬�����ӽ��ݹ�
	//����ӽ��û���ҵ�������NULL

	//ǰ���������
	if (root == NULL)
	{
		return NULL;
	}

	//���ж�root����Ƿ�ʹҪ���ҵĽ��
	if (root->val == val)
	{
		return root;
	}
	BTNode* leftret = FindNode(root->left, val);
	BTNode* rightret = FindNode(root->right, val);

	if (leftret)
	{
		return leftret;
	}
	if (rightret)
	{
		return rightret;
	}
	return NULL;
}

int NodeOfKLevel(BTNode* root, int k)
{
	//�ָ�ɲ����ӽ�㿪ʼ��k-1��ڵ����
	//���k == 1��˵���Ѿ������k��
	//���k > 1������Ҫ�������k�㿿��

	if (root == NULL)
	{
		return 0;
	}


	if (k == 1)
	{
		return 1;
	}
	else
	{
		return NodeOfKLevel(root->left, k - 1) + NodeOfKLevel(root->right, k - 1);
	}
}
