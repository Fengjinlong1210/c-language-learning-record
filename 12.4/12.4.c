#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//------------------------------------------�����ַ���-------------------------------------------------
//����һ
//void rotate(char arr[6], int n, int sz)
//{
//	char tmp = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = arr[0];
//		for (j = 0; j < sz - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[sz - 1] = tmp;
//	}
//}

//����������������

//void reverse(char* start, char* end)
//{
//	char* left = start;
//	char* right = end;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void rotate(char arr[], int n, int len)
//{
//	reverse(arr, arr + n - 1);
//	reverse(arr + n, arr + len - 1);
//	reverse(arr, arr + len - 1);
//
//}

//-------------------------------------------�ж��Ƿ�Ϊ�����ַ���------------------------------------------------
//int judgement(char* str, char* sour)
//{
//	int len = strlen(str);
//	strncat(str, str, len);
//	//printf("%s\n", str);
//	return NULL != strstr(str, sour);
//
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[6] = "bcdeb";
//	int ret = judgement(arr1, arr2);
//	if (0 == ret)
//	{
//		printf("no\n");
//	}
//	else if (1 == ret)
//	{
//		printf("yes\n");
//	}
//	return 0;
//}

//strcat
//strncat
//strstr
//strstr(const char* string, const char* strcharset);
//�ж�strcharset�Ƿ�Ϊstring���Ӵ���������Ӵ��������Ӵ����׵�ַ��������ǣ����ؿ�ָ��
//int main()
//{
//	char arr1[20] = "abcde ";
//	char arr2[6] = "fghij";
//	//strcat(arr1, arr2);//��arr2�ŵ�arr1����,���ص�һ���ַ��ĵ�ַ
//	strncat(arr1, arr2, 3);//��arr2ǰn���ַ��ŵ�arr1���棬���ص�һ���ַ��ĵ�ַ
//	printf("%s\n", arr1);
//	return 0;
//}

//-------------------------------------------gets����------------------------------------------------
//gets��ȡ�������룬ֱ�����з���Ȼ���������з����Զ����\0
//���������������ܻ�ռ�������ڴ棬
int main()
{
	char arr[100] = { 0 };
	//gets(arr);
	fgets(arr, 10, stdin);

	//fgets��һ�������ǵ�ַ�����������ַ������ڶ��������Ƕ�ȡ�ַ�������
	//����n,ֻ�ܶ�ȡn-1���ַ�,fgets�Ὣ\nҲ�洢�ڶ�ȡ����
	//�����ȡ���,���ز�����ַ,
	printf("%s", arr);
	return 0;
}