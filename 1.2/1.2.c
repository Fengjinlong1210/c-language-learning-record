#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//-------------------------ˮ�ɻ���------------------------------
//int test(int num, int count)
//{
//	int tmp = num;
//	if (tmp > 9)
//	{
//		return test(tmp / 10, count) + pow(tmp % 10, count);
//	}
//	else
//		return pow(tmp, count);
//}
//
//int pow(int num, int index)
//{
//	int n = 1;
//	while (index)
//	{
//		n *= num;
//		index--;
//	}
//	return n;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int count = 0;
//
//		int j = i;
//		while (j)
//		{
//			count++;
//			j /= 10;
//		}
//		ret = test(i, count);
//		if (i == ret)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//-------------------------------------------------------
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	int num = n;
//
//	for (i = 0; i < 5; i++)
//	{
//		while (i)
//		{
//			num = num * 10 + n;
//			break;
//		}
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//-------------------------------------------------------
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//ż����һ��Ǯ1.5ƿ
//������15��22.5
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("%d\n", (int)(n * 1.5));
//	}
//	if (n % 2 == 1)
//	{
//		printf("%d\n", (int)(n * 1.5 - 0.5));
//	}
//	return 0;
//}

//--------------------------�ṹ��-----------------------------
//struct human
//{
//	double height;
//	double weight;
//};
//
//struct stu
//{
//	char name[20];
//	int age;
//	struct human;
//};
//
//struct stu a = { "zhangsan",20, 180.3, 70.6 };
//struct stu* pa = &a;
//
//void print(struct stu* pa)
//{
//	printf("%s %d %lf %lf\n", pa->name, pa->age, pa->height, pa->weight);
//}
//
//int main()
//{
//	printf("%d\n", sizeof(a));//�ṹ���С�ǽṹ���Ա��С���
//	printf("%d\n", sizeof(pa));
//	print(pa);
//	//�ṹ��������ô�ַ���ã���ʡ�ڴ�ռ�
//	return 0;
//}

//-----------------------����ָ��--------------------------------
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//����ָ���һ��*��ʾppaָ���������int*�ı������ڶ���*��ʾppa��һ��ָ��
//	return 0;
//}

//int main()
//{
//	int* arr[10] = { NULL };
//	//ָ�����飬int*��ʾarr�����������int*
//	return 0;
//}

//-------------------------����ˮ�ɻ���------------------------------
int test(int num)
{
	int i = 0;
	int sum = 0;
	for (i = 10; i <= 10000; i *= 10)
	{
		sum += (num % i) * (num / i);
	}
	return sum;
}

int main()
{
	int i = 0;
	for (i = 10000; i < 100000; i++)
	{
		int ret = 0;
		ret = test(i);
		if (i == ret)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}