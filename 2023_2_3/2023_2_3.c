#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"


//右旋字符串的方法3
//void rotate(int* arr, int sz, int k)
//{
//	//创建新数组，将右旋的数字先放到数组中
//	int* tmp = (int*)malloc(sizeof(int) * sz);
//	if (!tmp)
//	{
//		perror("malloc");
//		exit(-1);
//	}
//	int i = 0;
//	int j = 0;
//	for (i = sz - k, j = 0; i <= sz - 1; i++, j++)
//	{
//		tmp[j] = arr[i];
//	}
//	//再把剩下的数字放到数组
//	for (i = 0, j = k ; i <= sz - k - 1; i++, j++)
//	{
//		tmp[j] = arr[i];
//	}
//	//拷贝新数组到原数组
//	memmove(arr, tmp, sizeof(int) * sz);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	rotate(arr, sz, k);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//顺序表
SeqList SL;

void SeqListTest1()
{
	InitSeqList(&SL);
	PushBack(&SL, 1);
	PushBack(&SL, 2);
	PushBack(&SL, 3);
	PushBack(&SL, 4);
	PushBack(&SL, 5);
	Print(&SL);
	PopBack(&SL);
	Print(&SL);
	Destroy(&SL);
}

void SeqListTest2()
{
	PushFront(&SL, 1);
	PushFront(&SL, 2);
	PushFront(&SL, 3);
	PushFront(&SL, 4);
	PushFront(&SL, 5);
	PushFront(&SL, 6);
	PushFront(&SL, 7);
	Print(&SL);

	//Print(&SL);
	//PopFront(&SL);
	//PopFront(&SL);
	//PopFront(&SL);
	//PopFront(&SL);
	//PopFront(&SL);
	//PopFront(&SL);
	//PopFront(&SL);
	//datatype ret = SeqListFind(&SL, 10);
	//printf("%d\n", ret);
	//PosInsert(&SL, 4, 10);
	PosDelete(&SL, 1);
	Print(&SL);

}

int main()
{
	SeqListTest2();
	return 0;
}