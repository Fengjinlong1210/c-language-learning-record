#define _CRT_SECURE_NO_WARNINGS 1
#include "BTtest.h"

//leetcode 965.

bool isUnivalTree(BTNode* root)
{
    //先判断根节点和两个子树是否相等，如果不相等，直接返回false
    //再用子结点当成下一次递归的根节点，继续向下递归
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
    //判断两棵树是否相同
    //先判断根节点和两个子结点，如果两棵树的这三个节点相同，
    //把子节点当成根节点向下递归
    //如果不同，直接返回false
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
    //判断一棵树是不是另一棵树的子树
    //从root的根节点开始遍历，对每一个结点与subroot进行比较
    //如果有结点与subroot相同，返回true
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
    //先序顺序建立二叉树
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
    //这里不需要i++，递归回去的left后面会i++

    return root;
}