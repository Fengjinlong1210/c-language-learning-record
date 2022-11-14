#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()			//scanf的格式化输入
//{
//	int a = 0;
//	int b = 0;
//	scanf("%4d%4d", &a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//倒叙单词
//how are you?->you? are how
//1.先将字符串整体倒序》》?uoy rea woh
//2.再把每个单词倒叙
//写出一个倒序函数

//void reverse(char *left,char *right)//转置字符串
//{
//	char tmp = 0;
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = {0};
//	gets(arr);								//获取字符串
//	int len = strlen(arr);//不包含\0
//	//int sz = sizeof(arr) / sizeof(arr[0]);//sizeof计算的是整个数组的长度
//	reverse(arr,arr+len-1);					//将字符串首尾地址传到函数
//	//先将整个字符串倒序
//	//printf("%s\n", arr);
//
//	//再将单词分别倒序
//	char* start = arr;						//标记起始位置
//	while (*start)							//*start非空进行循环
//	{
//		char* end = start;				//利用end寻找单词的结尾
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);			//此时end为空格或\0，减一才是单词结尾
//
//		if (*end == ' ')				//跨过单词间的空格
//		{
//			start = end + 1;
//		}
//		else						  //当end='\0'时，整个倒序字符串的单词已经倒序完
//			                          //此时end为\0,赋给start结束循环
//		{
//			start = end;
//		}
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}


//最小公倍数
//利用最大公因数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &b);
//	int x = a;
//	int y = b;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (0!=a%b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	//printf("%d\n", b);//此时b时最大公因数
//
//	//最小公倍数=a*b/最大公因数
//
//	printf("%d\n", x * y / b);
//	return 0;
//}

//编写函数计算次幂

//double power(double x, int n)//NO.1  只计算正次幂
//{
//	int i = 0;
//	double xpower = x;
//	for (i = n; i>1 ; i--)
//	{
//		xpower *= x;
//	}
//	return xpower;
//}

//double power(double x, int n)//NO.2  可以计算负次幂
//{
//	int i = 0;
//	double xpower = x;
//	if (0 == x && 0 != n)
//	{
//		return 0;
//	}
//	else if (0==n && 0 != x)
//	{
//		return 1;
//	}
//	if (0 == n && 0 == x)
//	{
//		return 1;
//	}
//
//	if (n < 0)
//	{
//		for (i = -n; i > 1; i--)
//		{
//			xpower *= x;
//		}
//		return 1.0 / xpower;
//	}
//	else
//	{
//		for (i = n; i > 1; i--)
//		{
//			xpower *= x;
//		}
//		return xpower;
//	}
//
//}

//利用递归计算次幂
//如果n>0，正常计算
//如果n==0,返回1
//如果n小于零，取-n计算
//double power(double x, int n)
//{
//	if (0 == n)
//	{
//		return 1;
//	}
//	else if (n > 0)
//	{
//		return x * power(x, n - 1);
//	}
//	else
//	{
//		return 1 / (x * power(x, -(n+1)));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	double x = 0;
//	double xpow = 0;
//	printf("请输入数字和幂\n");
//	scanf("%lf %d", &x, &n);
//	
//	printf("%lf\n", power(x, n));
//	return 0;
//}

//利用递归求二进制

//int binary(int a)
//{
//	int r = 0;
//	r = a % 2;
//	if (a >= 2)
//	{
//		binary(a / 2);
//	}
//	printf("%d", r);
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入十进制数字\n");
//	scanf("%d", &a);
//	int ret = binary(a);
//	return 0;
//}



//将n转化成x进制
//void base_n(int n, int x)
//{
//	int ret = 0;
//	ret = n % x;
//	if (n >= x)
//	{
//		base_n(n / x, x);
//	}
//	printf("%d", ret);
//}
//
//int main()
//{
//	int n = 0;
//	int x = 0;
//	scanf("%d %d", &n, &x);
//	base_n(n, x);
//	return 0;
//}


//利用函数循环计算Fib数列
//1 1 2 3 5 8 13 21 34 55 89
//int Fib(unsigned int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//}