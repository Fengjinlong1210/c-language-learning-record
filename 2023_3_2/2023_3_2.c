#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

int main()
{
	//int i = 0;
	//char arr[] = "cda##ed#q##h###";
	//BTNode* root = CreateTree(arr, &i);
	//LevelTraverse(root);
	BTNode* root = NewTree();
	//int j = CompleteBinaryTree(root);
	//printf("%d \n", j);
	BinaryTreeDestory(root);
	root = NULL;

	return 0;
}


//--------------------------leetcode 144.-----------------------------
//二叉树前序遍历
//int TreeSize(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void PreOrder(struct TreeNode* root, int* arr, int* pi)
//{
//    if (!root)
//    {
//        return;
//    }
//    arr[(*pi)++] = root->val;
//    PreOrder(root->left, arr, pi);
//    PreOrder(root->right, arr, pi);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//    //returnSize返回树的节点个数
//    *returnSize = TreeSize(root);
//    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
//    int i = 0;
//    //遍历和计数功能分开
//    PreOrder(root, arr, &i);
//    return arr;
//}

//------------------------leetcode 94.-------------------------------
//中序遍历

//------------------------leetcode 101.-------------------------------
//对称二叉树