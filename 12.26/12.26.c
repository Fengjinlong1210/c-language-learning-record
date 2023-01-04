#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数：形参实参、嵌套调用、链式访问、递归
//函数的形参是实参的一份临时拷贝，不能通过形参改变实参的值
//只能通过传址调用改变实参

//交换两个变量

//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d %d \n", a, b);
//	return 0;
//}

//------------------------------写函数判断素数---------------------------------------------
//int is_prime(int n)
//{
//	int i = 0;
//	if (1 == n)
//	{
//		return 0;
//	}
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = is_prime(n);
//	if (1 == ret)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	return 0;
//}

//-------------------------------------判断闰年----------------------------------------
//int is_leapyear(int n)
//{
//	return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = is_leapyear(n);
//	if (1 == ret)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	return 0;
//}

//----------------------------二分查找函数---------------------------、
//int binary_search(int arr[], int sz, int n)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	scanf("%d", &n);
//	int ret = binary_search(arr, sz, n);
//	printf("%d\n", ret);
//	return 0;
//}

//------------------------函数递归-------------------------------
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int a = 1234;
//	print(1234);
//	return 0;
//}

//--------------------------不创建临时变量求字符串长度-----------------------------
//int my_strlen(char* p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(p + 1);
//}
//
//int main()
//{
//	char* p = "abcdefg";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//	return 0;
//}

//--------------------------递归求阶乘-----------------------------
//int factorial(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*factorial(n-1);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}

//--------------------------fib数列-----------------------------
//1 1 2 3 5 8 13 21 34 55
//int fib(int n)
//{
//	if ((1 == n) || (2 == n))
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	return 0;
//}

//-------------------------------------------------------
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}

//int func(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * func(n, k - 1);
//	}
//	if (0 == k)
//	{
//		return 1;
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	int ret = func(n,k);
//	printf("%d\n", ret);
//	return 0;
//}

//调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19,输入：1729，输出：19
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//------------------------------逆序字符串-------------------------
//void reverse_string(char* str,int sz)
//{
//	char tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		tmp = *(str+left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	reverse_string(arr,sz);
//	//printf("%s\n", arr);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//---------------------------递归和非递归实现strlen----------------------------
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//从1加到n
//unsigned long long sum(int n)
//{
//	int i = 0;
//	unsigned long long sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	unsigned long long ret = sum(n);
//	printf("%lld\n", ret);
//	return 0;
//}

//int sum(int n)
//{
//	int num = 0;
//	int sum = 0;
//	while (n--)
//	{
//		scanf("%d", &num);
//		sum += num;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d\n", ret);
//	return 0;
//}
// 
//--------------------非递归实现Fibonacci数列-----------------------------------
//1 1 2 3 5 8 13 21 34 55 
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	if ((1 == n) || (2 == n))
		return 1;
	else
	{
		while (n>2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}