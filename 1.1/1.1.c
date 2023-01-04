#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//-----------------------打印二进制的奇数位和偶数位--------------------------------
//int main()
//{
//	int num = 0;
//	int i = 0;
//	//00000000 00000000 00000000 00001111
//	//00000000 00000000 00000000 00001111
//	scanf("%d", &num);
//	//获取奇数位
//	for (i = 30; i>=0 ; i -= 2)
//	{
//		printf("%d ", (num>>i)&1);
//	}
//	//获取偶数位
//	printf("\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//-------------------------把一个数转化成六进制------------------------------
//void convert(int num, int n)
//{
//	if (num >= n)
//	{
//		convert(num / n, n);
//	}
//	printf("%d", num % n);
//}
//int main()
//{
//	int num = 0;
//	int n = 6;
//	scanf("%d", &num);
//	convert(num, n);
//	return 0;
//}

//--------------------------删除序列中指定数字-----------------------------
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != num)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//方法二
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int num = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	 1 2 3 4 5
//	 1 2   4 5
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != num)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//-------------------------------------------------------
//int main()
//{
//	int n = 0;
//	int m = 0;
//	long long LCM = 0;
//	long long GCD = 0;
//	int tmp = 0;
//	scanf("%d %d", &n, & m);
//	long long mul = n * m;
//
//	int min = (n > m) ? m : n;
//	while (n % m)
//	{
//		tmp = n % m;
//		n = m;
//		m = tmp;
//	}
//	GCD = m;
//	LCM = mul/GCD;
//	printf("%d\n", GCD + LCM);
//	printf("%d\n", m);
//	return 0;
//}

//---------------------------走台阶----------------------------
//int func(int num)
//{
//	if (num <= 2)
//	{
//		return num;
//	}
//	else
//		return func(num - 1) + func(num - 2);
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = func(num);
//	printf("%d\n",ret);
//	return 0;
//}

//--------------------------计算某年的某月有多少天-----------------------------
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d", &year);
//	scanf("%d", &month);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("31\n");
//		}
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("30天\n");
//		}
//		else if (month == 2)
//		{
//			printf("29天\n");
//		}
//	}
//	else
//	{
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("31天\n");
//		}
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("30天\n");
//		}
//		else if (month == 2)
//		{
//			printf("28天\n");
//		}
//	}
//	return 0;
//}

//------------------------判断是不是字母-------------------------------
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z') 
//		{
//			printf("%c\n", ch-32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch+32);
//		}
//		getchar();
//	}
//	return 0;
//}

//-------------------------------------------------------
//int main()
//{
//	double price = 0;
//	scanf("%lf", &price);
//	int day = 0;
//	int month = 0;
//	scanf("%d %d", &month, &day);
//	int coupon = 0;
//	scanf("%d", &coupon);
//	double money = 0;
//	if (11 == day && 11 == month)
//	{
//		if (coupon == 0)
//		{
//			money = price * 0.7;
//		}
//		else if (coupon == 1)
//		{
//			money = price * 0.7 - 50;
//		}
//	}
//	else if (12 == day && 12 == month)
//	{
//		if (coupon == 0)
//		{
//			money = price * 0.8;
//		}
//		else if (coupon == 1)
//		{
//			money = price * 0.8 - 50;
//		}
//	}
//	if (money > 0)
//	{
//		printf("%.2lf\n", money);
//	}
//	else
//	{
//		printf("0.00\n");
//	}
//	return 0;
//}
//-------------------------------------------------------
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//    //01 00 00 00
//    //02 00 00 00
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//12
//	printf(" %d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//int main()
//{
//    int a = 0x11223344;
//    //高字节存放在低处
//    char* pc = (char*)&a;//&0x44
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//逆序字符串
//#include <string.h>
//int main()
//{
//	char str1[500] = { 0 };
//	char str2[500] = { 0 };
//
//	gets(str1);
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		str2[i] = str1[len-1-i];
//	}
//	printf("%s\n", str2);
//	return 0;
//}

//水花仙数


