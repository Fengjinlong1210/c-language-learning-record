#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ԥ����ָ��

/*
#define MAX 100  //���峣��
#define ext extern  //�������ؼ���
#define sz sizeof  //�������ؼ���
#define circulation for(int i=0; i<10; i++)\
							printf("%d ", i);
					//����ѭ��  ����б�ܽ�������
//#define print printf("hello\n")

//���к궨��ʱ����Ҫ�ӻ��з�

//define�����
#define ADD(x,y) ((x)+(y))  //����ӷ���
#define print(parament) printf("%d\n",parament);//�꺯��
#define SQUARE(x) ((x)*(x))
//�������ʽҪ�������ţ�������������ȼ�Ӱ�������
*/

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int s = sz(arr);
//	printf("%d\n", s);
//	circulation;
//	int sum = ADD(10, 20);
//	print(sum);
//	print(SQUARE(sum));//���Ƕ��
//	//���ú�ʱ���ȼ������Ƿ����#define����ķ��ţ�����У�������ֵ�滻#define����ķ���
//	//�滻���ı�������ֵ�������뵽ԭ����λ��
//	//�����ļ��ٴν���ɨ�裬����԰�����#define����ķ��ţ����ظ���������
//	return 0;
//}

//-------------------------���������뵽�ַ�����
//ǰ�᣺�ַ��������Զ����ӹ���
/*int main()
{
	printf("hello ""world""\n");
	//�Կ�����������ַ���
	return 0;
}
*/

//#define PRINT(FORMAT, value) \
//				printf("The value of "#value " is " FORMAT"\n", value);
////#�����ã��Ѻ����ת�����ַ���
//int main()
//{
//	int i = 10;
//	PRINT("%d", i+10);
//	return 0;
//}

//�������õĺ����
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	MAX(a++, b++);//ʹ��++��Զ�γ��ֵĲ�����ɸ�����
//	printf("%d %d\n", a, b);
//	return 0;
//}
//
////#undef��������һ���궨��
//#undef MAX

//--------------------------��������-----------------------------
//#define DEBUG
//
//int main()
//{
////#undef DEBUG
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef DEBUG
//		printf("%d\n", arr[i]);
//#endif // DEBUG
//
//	}
//	return 0;
//}

//ͷ�ļ�������
//�⺯����ͷ�ļ��ü�����  #include <stdio.h>
//�����ļ���˫����		#include "test.h"
//˫�������õ��ļ����ȴ�Ŀ¼�²��ң����Ŀ¼��û�и��ļ��������ӿ���Ѱ��



//----------------------�ҳ�������ͬ������---------------------
//���  ��ͬΪ0 ����Ϊ1
//a^a=0  0^a=a

//void find_num(int arr[], int sz)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < sz; i++)
//	{
//		sum ^= arr[i];
//	}
//	//Ȼ��������Ϊ���飬��������ͬ�����ֵַ���ͬ��(��������������ͬ�Ķ�����λ���з���)
//	int ret1 = 0, ret2 = 0;
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((sum >> i) & 1) == 1)
//		{
//			//�������ĵ�iλ��ͬ
//			pos = i;//
//			break;
//		}
//	}
//
//	//�Ѳ�ͬ������������õ���������
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			ret1 ^= arr[i];
//		}
//		else
//		{
//			ret2 ^= arr[i];
//		}
//	}
//	//��������Ľ�����������Ľ�����õ�����������
//	printf("%d\n", sum ^ ret1);
//	printf("%d\n", sum ^ ret2);
//}
//
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,4,5,6 };
//	//�����������򣬵õ�������ͬ�����Ľ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz);
//	return 0;
//}

//--------------------------//ʵ��atoi-----------------------------
//�����ո��ַ�
//ʶ��Ӽ���
//ʶ����ǰ������֣������������ַ���ͣ����  123abc456 ֻʶ��ǰ���123
//�����һ���ַ��Ƿ������ַ�������ַ�������ֻ�пհ��ַ����ú�������0
//����ַ����е�����Խ�磬����0
//��������ָ�룬����0

//#include <ctype.h>
//#include <limits.h>
//enum status
//{
//	INVALID,
//	VALID
//};
//
//enum status st1 = INVALID;
//
//int my_atoi(const char* str)
//{
//	if (!str)
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+' || *str == '-')
//	{
//		if (*str == '-')
//		{
//			flag = -1;
//		}
//		str++;
//	}
//	if (!isdigit(*str))
//	{
//		return 0;
//	}
//	if (*str == '\n')
//	{
//		return 0;
//	}
//	long long num = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			num = 10 * num + (*str - '0');
//			str++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (num > INT_MAX || num < INT_MIN)
//	{
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		st1 = VALID;
//	}
//	return (int)num * flag;
//
//}
//
//int main()
//{
//	int ret = my_atoi("1231454895156189516");
//	printf("%d\n", ret);
//	if (st1 == INVALID)
//	{
//		printf("INVALID\n");
//	}
//	else
//	{
//		printf("VALID\n");
//
//	}
//	return 0;
//}


//---------------------------��ʵ��offsetof----------------------------
//��ʾ�ṹ���ƫ����������ָ�����

//struct test
//{
//	char a;
//	int b;
//	char c;
//	double d;
//};
//
//#define OFFSETOF(type, member_name) (int)&(((type*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct test, a));
//	printf("%d\n", OFFSETOF(struct test, b));
//	printf("%d\n", OFFSETOF(struct test, c));
//	printf("%d\n", OFFSETOF(struct test, d));
//
//	return 0;
//}

//-----------------��ʵ�ֽ���һ����������λ��ż��λ-------------
//ȡ����������λ��ż��λ
//n&0xaaaaaaaa�õ�ż��λ   n&0x55555555�õ�����λ
//ż��λ����/����λ����
//���
#define SWAP(n) ((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1)
#undef SWAP
//int main()
//{
//	int a = 10;
//	printf("%d\n", SWAP(17));
//	//0001 0001
//	//0010 0010
//	return 0;
//}


char* sim_strncat(char* dest, const char* src, int n)
{
	char* start = dest;
	while (*dest++);
	dest--;
	while (n-- && (*dest++ = *src++))
	{
		;
	}
	return start;
}

char* sim_strncpy(char* dest, const char* src, int n)
{
	char* start = dest;
	while (n-- && (*dest++ = *src++))
	{
		;
	}
	*dest = '\0';
	return start;
}

int main()
{
	char arr[10] = "abcde";
	char arr2[5] = "fgh";
	sim_strncpy(arr, arr2, 2);
	printf("%s\n",arr);
	return 0;
}