#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//----------------------����������ż����λ�á�---------------------------------
//void adjust_arr(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if ((arr[j] % 2) == 0 && (arr[j + 1] % 2 == 1))
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,8,10,1,3,5,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	adjust_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//-----------------------ģ��ʵ��strcpy--------------------------------
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* start = dest;
//	while (*dest++ = *src++)
//		;
//	return start;
//}
//
//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "xxxxxxxxxxxxxxxxx";
//
//	printf("%s\n", my_strcpy(str2, str1));
//	//char* strcpy(char* dest, const char* src)
//
//	return 0;
//}

//------------------------ģ��ʵ��strlen-------------------------------
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = "abcdefgh";
//	printf("%d\n", my_strlen(str));
//	//int strlen(const char* str);
//	return 0;
//}

//--------------------------���������ж�-----------------------------
//void judge_arr(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//		{
//			count++;
//		}
//		else if (arr[i] <= arr[i + 1])
//		{
//			count--;
//		}
//	}
//	if ((count == n - 1) || (count == -(n - 1)))
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//}
//
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	judge_arr(arr, n);
//	return 0;
//}

//-------------------------------------------------------
//����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	int tmp = 0;
//	scanf("%d", &n);
//	for (i = 0 ; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//		if (tmp < min)
//		{
//			min = tmp;
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}

//----------------------------�ϲ���������---------------------------
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[2000] = { 0 };
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	scanf("%d %d", &n, &m);
//	int sz = m + n;
//	for (i = 0; i < m + n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr,sz);
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//-----------------------���x��--------------------------------
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//-------------------------�����ͷ------------------------------
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		int j = 0;
		int k = 0;
		//��������
		for (i = 0; i < n ; i++)
		{
			//��ӡ�ո�:�ո����2*�кţ����ֵ�� -2*�кţ�ʵ��ֵ��k
			for (k = 0; k < 2 * n - 2 * i; k++)
			{
				printf(" ");
			}
			//��ӡ�Ǻ�,ÿ�д�ӡ�к�(i)��
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		//��ӡ�м����
		for (i = 0; i <= n; i++)
		{
			printf("*");
		}
		printf("\n");
		//��ӡ�°벿��
		for (i = 1; i <= n; i++)
		{
			//�ո�:ÿ�е���2*�кŸ�
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}
			//�Ǻ�:ÿ��Ϊn+1-i
			for (j = 0; j < n + 1 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}