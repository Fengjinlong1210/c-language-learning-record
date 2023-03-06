#define _CRT_SECURE_NO_WARNINGS 1
#include "circularlist.h"
#include "Sort.h"

//SLNode* CreateCL(int n)
//{
//	SLNode* head = SLInitHead();
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		SLPushBack(head, i);
//	}
//	return head;
//}
//
//
//SLNode* Survival(int n, int m)
//{
//	SLNode* phead = CreateCL(n);
//	SLNode* first = phead->next;
//
//	while (SLSize(phead) != 1)
//	{
//		int tmp = m;
//		SLNode* target = first;
//		SLNode* targetnext = target->next;
//		while (--tmp)
//		{
//			target = target->next;
//			targetnext = target->next;
//		}
//		if (target == phead->next)
//		{
//			SLDelete(phead, target);
//			phead->next = targetnext;
//			first = targetnext;
//			continue;
//		}
//		SLDelete(phead, target);
//		first = targetnext;
//		SLPrint(phead);
//	}
//	return first;
//}
//
//int main()
//{
//	//SLNode* head = CreateCL(10);
//	SLNode* ret = Survival(10, 3);
//	printf("%d\n", ret->val);
//	SLDistroy(ret);
//	return 0;
//}

void TestQuickSort()
{
	int n = 20000000;
	int* arr1 = (int*)malloc(sizeof(int) * n);
	int* arr2 = (int*)malloc(sizeof(int) * n);
	int* arr3 = (int*)malloc(sizeof(int) * n);

	if (!arr1 || !arr2 || !arr3)
	{
		perror("malloc");
		return;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr1[i] = rand();
		arr2[i] = arr1[i];
		arr3[i] = arr1[i];

	}
	int t1 = clock();
	QuickSort1(arr1, 0, n);
	int t2 = clock();

	int t3 = clock();
	QuickSort2(arr2, 0, n);
	int t4 = clock();
	
	int t5 = clock();
	QuickSort3(arr3, 0, n);
	int t6 = clock();

	//for (i = 0; i < n; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	printf("QuickSort1: %d\n", t2 - t1);
	printf("QuickSort2: %d\n", t4 - t3);
	printf("QuickSort3: %d\n", t6 - t5);

}

void Efficient()
{

}

int main()
{
	srand((unsigned int)time(0));
	TestQuickSort();
	return 0;
}

