#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//��������
//���ַ�ʽ����������/����ָ�����

//typedef struct test1
//{
//	char a;
//	int arr[];//��������
//}Test1;
//Test1 p1;//�ṹ�����
//
//int main()
//{
//	int i = 0;
//	Test1* ptr1 = &p1;//����ָ�����
//	ptr1 = (Test1*)malloc(sizeof(Test1) + sizeof(int) * 10);
//	//Ϊptr1����һ���������ڴ�ռ�
//	if (!ptr1)
//	{
//		//�жϿ��ٿռ���Ч��
//		perror("ptr1:");
//		return 1;
//	}
//	
//	ptr1->a = 'a';
//	
//	for (i = 0; i < 10; i++)
//	{
//		ptr1->arr[i] = i;//��ֵ
//	}
//	
//	printf("%c\n", ptr1->a);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr1->arr[i]);
//	}
//	
//	free(ptr1);//�ͷ��ڴ�
//	ptr1 = NULL;
//
//	return 0;
//}

/// <summary>
/// ����ָ�����
/// </summary>
//typedef struct test2
//{
//	char a;
//	int b;
//	int* arr;
//}Test2;
//
//Test2 p2;
//
//int main()
//{
//	int i = 0;
//	Test2* ptr2 = &p2;
//	
//	ptr2 = (Test2*)malloc(sizeof(Test2));
//	if (!ptr2)
//	{
//		return 1;
//	}
//	ptr2->a = 'a';
//	ptr2->b = 10;
//	ptr2->arr = (int*)malloc(sizeof(int) * 10);
//	if (!ptr2->arr)
//	{
//		perror("ptr2->arr:");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ptr2->arr[i] = i;
//	}
//	printf("%c\n", ptr2->a);
//	printf("%d\n", ptr2->b);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr2->arr[i]);
//	}
//	free(ptr2->arr);
//	ptr2 = NULL;
//	free(ptr2);
//	ptr2 = NULL;
//
//	//��Ҫfree�����ڴ棬�������ͷ�
//	return 0;
//}

//----------------------������---------------------------------
#include <math.h>

int main()
{
	int num = 0;
	int sum = 0;
	int i = 0;

	scanf("%d", &num);
	//123
	while (num > 0)
	{
		sum += (num % 2) * (int)pow(10, i);
		num /= 10;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}