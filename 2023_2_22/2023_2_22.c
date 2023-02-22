#define _CRT_SECURE_NO_WARNINGS 1
#include "TopK.h"

heap HP;

void Test1()
{
	datatype arr[] = { 1,3,4,6,5,2,7,13,9,8,0 };
	//CreateHeap(&HP, arr, sizeof(arr) / sizeof(arr[0]));
	//Print(&HP);
	datatype* ret = TopK(arr, sizeof(arr) / sizeof(arr[0]), 5);
	int i = 0; 
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ret[i]);
	}
}

void Test2()
{
	//写入文件数据
	FILE* finput = fopen("data.txt", "w");
	if (!finput)
	{
		perror("fopen");
		return;
	}
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		fprintf(finput, "%d\n", i + 100);
	}
	fclose(finput);

	//读取数据
	datatype arr[100] = { 0 };
	FILE* foutput = fopen("data.txt", "r");
	for (i = 0; i < 100; i++)
	{
		fscanf(foutput, "%d", &arr[i]);
	}
	datatype* ret = TopK(arr, 100, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ret[i]);
	}
}

int main()
{
	//Test1();
	Test2();
	return 0;
}