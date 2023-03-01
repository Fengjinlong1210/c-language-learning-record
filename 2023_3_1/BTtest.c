#define _CRT_SECURE_NO_WARNINGS 1
#include "BTtest.h"

//leetcode 965.

bool isUnivalTree(BTNode* root)
{
    //���жϸ��ڵ�����������Ƿ���ȣ��������ȣ�ֱ�ӷ���false
    //�����ӽ�㵱����һ�εݹ�ĸ��ڵ㣬�������µݹ�
    if (root == NULL)
    {
        return true;
    }

    if (root->left && root->left->val != root->val)
    {
        return false;
    }

    if (root->right && root->right->val != root->val)
    {
        return false;
    }

    return isUnivalTree(root->left) && isUnivalTree(root->right);
}

bool isSameTree(BTNode* p, BTNode* q)
{
    //�ж��������Ƿ���ͬ
    //���жϸ��ڵ�������ӽ�㣬������������������ڵ���ͬ��
    //���ӽڵ㵱�ɸ��ڵ����µݹ�
    //�����ͬ��ֱ�ӷ���false
    if (p == NULL && q == NULL)
    {
        return true;
    }

    if (p == NULL || q == NULL)
    {
        return false;
    }


    if (p->val != q->val)
    {
        return false;
    }

    return isSameTree(p->left, q->left)
        && isSameTree(p->right, q->right);

}

bool isSubtree(BTNode* root, BTNode* subRoot)
{
    //�ж�һ�����ǲ�����һ����������
    //��root�ĸ��ڵ㿪ʼ��������ÿһ�������subroot���бȽ�
    //����н����subroot��ͬ������true
    if (root == NULL)
    {
        return false;
    }
    if (isSameTree(root, subRoot))
    {
        return true;
    }

    return isSubtree(root->left, subRoot)
        || isSubtree(root->right, subRoot);

}

BTNode* CreateTree(char* str, int* pi)
{
    //����˳����������
    if (str[*pi] == '#')
    {
        return NULL;
    }
    BTNode* root = (BTNode*)malloc(sizeof(BTNode));
    if (!root)
    {
        return NULL;
    }
    root->val = str[(*pi)++];

    root->left = CreateTree(str, pi);
    (*pi)++;
    root->right = CreateTree(str, pi);
    //���ﲻ��Ҫi++���ݹ��ȥ��left�����i++

    return root;
}