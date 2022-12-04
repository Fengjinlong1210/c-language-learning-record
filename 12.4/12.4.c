#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//------------------------------------------左旋字符串-------------------------------------------------
//方法一
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

//方法二，三步倒序

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

//-------------------------------------------判断是否为左旋字符串------------------------------------------------
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
//判断strcharset是否为string的子串，如果是子串，返回子串的首地址，如果不是，返回空指针
//int main()
//{
//	char arr1[20] = "abcde ";
//	char arr2[6] = "fghij";
//	//strcat(arr1, arr2);//把arr2放到arr1后面,返回第一个字符的地址
//	strncat(arr1, arr2, 3);//把arr2前n个字符放到arr1后面，返回第一个字符的地址
//	printf("%s\n", arr1);
//	return 0;
//}

//-------------------------------------------gets函数------------------------------------------------
//gets读取整行输入，直到换行符，然后舍弃换行符，自动添加\0
//如果输入过长，可能会占用其他内存，
int main()
{
	char arr[100] = { 0 };
	//gets(arr);
	fgets(arr, 10, stdin);

	//fgets第一个参数是地址，存放输入的字符串，第二个参数是读取字符个数，
	//输入n,只能读取n-1个字符,fgets会将\n也存储在读取串中
	//如果读取完成,返回参数地址,
	printf("%s", arr);
	return 0;
}