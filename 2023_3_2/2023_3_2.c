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
//������ǰ�����
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
//    //returnSize�������Ľڵ����
//    *returnSize = TreeSize(root);
//    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
//    int i = 0;
//    //�����ͼ������ֿܷ�
//    PreOrder(root, arr, &i);
//    return arr;
//}

//------------------------leetcode 94.-------------------------------
//�������

//------------------------leetcode 101.-------------------------------
//�Գƶ�����