#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()			//scanf�ĸ�ʽ������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%4d%4d", &a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//���𵥴�
//how are you?->you? are how
//1.�Ƚ��ַ������嵹�򡷡�?uoy rea woh
//2.�ٰ�ÿ�����ʵ���
//д��һ��������

//void reverse(char *left,char *right)//ת���ַ���
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
//	gets(arr);								//��ȡ�ַ���
//	int len = strlen(arr);//������\0
//	//int sz = sizeof(arr) / sizeof(arr[0]);//sizeof���������������ĳ���
//	reverse(arr,arr+len-1);					//���ַ�����β��ַ��������
//	//�Ƚ������ַ�������
//	//printf("%s\n", arr);
//
//	//�ٽ����ʷֱ���
//	char* start = arr;						//�����ʼλ��
//	while (*start)							//*start�ǿս���ѭ��
//	{
//		char* end = start;				//����endѰ�ҵ��ʵĽ�β
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);			//��ʱendΪ�ո��\0����һ���ǵ��ʽ�β
//
//		if (*end == ' ')				//������ʼ�Ŀո�
//		{
//			start = end + 1;
//		}
//		else						  //��end='\0'ʱ�����������ַ����ĵ����Ѿ�������
//			                          //��ʱendΪ\0,����start����ѭ��
//		{
//			start = end;
//		}
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}


//��С������
//�����������
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
//	//printf("%d\n", b);//��ʱbʱ�������
//
//	//��С������=a*b/�������
//
//	printf("%d\n", x * y / b);
//	return 0;
//}

//��д�����������

//double power(double x, int n)//NO.1  ֻ����������
//{
//	int i = 0;
//	double xpower = x;
//	for (i = n; i>1 ; i--)
//	{
//		xpower *= x;
//	}
//	return xpower;
//}

//double power(double x, int n)//NO.2  ���Լ��㸺����
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

//���õݹ�������
//���n>0����������
//���n==0,����1
//���nС���㣬ȡ-n����
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
//	printf("���������ֺ���\n");
//	scanf("%lf %d", &x, &n);
//	
//	printf("%lf\n", power(x, n));
//	return 0;
//}

//���õݹ��������

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
//	printf("������ʮ��������\n");
//	scanf("%d", &a);
//	int ret = binary(a);
//	return 0;
//}



//��nת����x����
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


//���ú���ѭ������Fib����
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