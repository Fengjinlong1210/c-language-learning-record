#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//------------------------------------------��n�Ľ׳�---------------------------------------------
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ans = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ans *= i;
//	}
//	printf("%d\n", ans);
//	return 0;
//}

//------------------------------------����1��+2��+...+n!---------------------------------------------------
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ans = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		ans += sum;
//	}
//	printf("%d\n", ans);
//	return 0;
//}

//----------------------------------------���ֲ���-----------------------------------------------
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n = arr[mid])
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;
//}

//-------------------------------------�ַ����м��ƶ�--------------------------------------------------
//#include <windows.h>
//int main()
//{
//	char arr1[10] = "abcdefghi";
//	char arr2[10] = "#########";
//	int left = 0;
//	int right = sizeof(arr2) / sizeof(arr2[0]) - 2;
//
//	do
//	{
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//	} while (left++ <= right--);
//
//	return 0;
//}

//----------------------------------------������-----------------------------------------------
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("********  1.��ʼ  *********\n");
//	printf("********  0.�˳�  *********\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	//���������
//	int num = rand() % 100 + 1;
//	int gus = 0;
//	int i = 0;
//	//������
//	//printf("%d\n", num);
//	for (i=0; i<7; i++)
//	{
//		printf("����������:\n");
//		scanf("%d", &gus);
//		if (gus < num)
//		{
//			printf("��С��\n");
//		}
//		else if (gus > num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			system("cls");
//			printf("�¶���\n");
//			break;
//		}
//	}
//	if (7 == i)
//	{
//		system("cls");
//		printf("��������\n");
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	//����
//	do {
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("game\n");
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//
//	} while (input);
//	system("cls");
//	if (0 == input)
//	{
//		printf("game over\n");
//	}
//
//	return 0;
//}

//---------------------------------------------------------------------------------------
//дһ�������ӡ1 - 100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//---------------------------------------------------------------------------------------
//����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d \n", a, b, c);
//	return 0;
//}

//-----------------------------------------��ӡ����----------------------------------------------

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//			if (j == i - 1)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}

//--------------------------------------��ӡ1000~2000������----------------------------------------------
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0)&&(i%100!=0))||(i%400==0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//-------------------------------------���Լ��--------------------------------------------------
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a % b != 0)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}

//---------------------------------------�˷��ھ���------------------------------------------------
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//--------------------------------------��ʮ���������ֵ-------------------------------------------------
//#include <string.h>
//int main()
//{
//	int arr[] = { 1,5,9,7,2,12,26,15,69,75,2 };
//	int sz = sizeof(arr)/sizeof(arr[0]) - 1;
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	switch (i)
//	{
//	case 1:
//		printf("1\n");
//	case 2:
//		printf("2\n");
//	default:
//		printf("3\n");
//
//	}
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += -(1.0 / i);
//		}
//		else if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//��һ�� 1�� 100 �����������г��ֶ��ٸ�����9
int main()//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}