#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//---------------------------------------------------------------------------------------
//��������
// char\short\int\long\long long\float\double\unsigned
// 
//����������
//�ַ�����ת���ַ���ע��
//���
//����
//����
//������
//�����ؼ���
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(unsigned int));
//	//sizeof����������������ռ�ռ�Ĵ�С
//	//sizeof����c���Կ⺯������һ��������
//	//sizeof�ڼ�������ڴ��Сʱ������ʡ������
//	//������������ʱ������ʡ������
//	//sizeof���������Сʱ����������ʾ��������
//
//	int a = 10;
//	printf("%d\n", sizeof a);
//
//	return 0;
//}

//����������
//
//int a = 10;//ȫ�ֱ���
//
//enum sex //�м��ö��Ÿ���
//{
//	Male=10,//���㿪ʼ��,����1
//	Female
//};
//
//int main()
//{
//	//ȫ�ֱ������ֲ�����
//	//ȫ�ֱ������������ⲿ
//	//�������ڲ��Ľ����ֲ�����
//	//ȫ�ֱ����;ֲ���������ͬ��������ʹ�þֲ�����
//	
//	printf("%d\n", a);
//	//������һ����������ʹ�õķ�Χ�������������������
//	//�ֲ���������������������ڵľֲ���Χ
//	//ȫ�ֱ����������������������
//
//	//�������ڣ������Ӵ��������ٵ�һ��ʱ���
//
//	//����
//	//1.������  1.2   
//	//2.const���εĳ����������ʻ��Ǳ�����
//	//3.#define ����ĳ���
//	//4.ö�ٳ���
//	printf("%d\n", Male);
//	printf("%d\n", Female);
//
//	return 0;
//}

//�ַ�����ת���ַ�
//int main()
//{
//	//��˫������������"abcdefg"�����ַ��������������ַ���
//	//�ַ����Ľ�β��\0�������ַ����Ľ�����־���������ַ�������
//	//strlen�����ַ����ĳ��ȣ���\0��Ϊ��β���ǿ⺯��
//
//	//ת���ַ����ı��ַ�ԭ�е���˼
//	// '' "" \�����š�˫���š�б�ܶ���Ҫת���ַ�
//	printf("%c\n", '\'');//
//	printf("%c\n", '\"');
//	printf("%c\n", '\\');
//
//
//	return 0;
//}

//���
	//ѡ����䣺if ��else if��else��switch��
	//ѭ����䣺while��do while��for


//�ؼ���static

//static���ξֲ�������ʹ��洢�ھ�̬�����ı��˾ֲ��������������ڣ�����ֹͣ�Ž���

//void test2()
//{
//	static int a = 2;
//	a++;
//	printf("%d\n", a);
//}
//
//void test1()
//{
//	int b = 2;
//	b++;
//	printf("%d\n", b);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		//test1();
//		test2();
//		i++;
//	}
//	return 0;
//}

//static����ȫ�ֱ�����ʹȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�
//static���κ�����ʹ����ֻ���ڱ�Դ�ļ���ʹ��

//extern�����ⲿ����
//#include <string.h>
//int main()
//{
//	//printf("%d\n", '\060');
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}

//int max_cmp(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", max_cmp(a, b));
//	return 0;
//}

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    while (a > 0)
//    {
//        printf("%d ", a % 10);
//        a = a / 10;
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int sum = 0;
//	float avg = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &a);
//		sum += a;
//	}
//	avg = (float)sum / 5.0;
//	printf("%.1f", avg);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int hour = 0;
//	int sec = 0;
//	int min = 0;
//	scanf("%d", &a);
//	hour = a/60/60;
//	min = a%3600/60;
//	sec = a % 60;
//
//	printf("%d %d %d\n", hour, min, sec);
//	return 0;
//}

//�ṹ��

//struct stu
//{
//	char name[20];
//	int age;
//	double grade;
//};
//
//int main()
//{
//	//struct stu a;
//	//scanf("%s %d %f", a.name, &(a.age), &(a.grade));
//	//printf("%s %d %f\n", a.name, a.age, a.grade);
//
//	//�ṹ��ָ��
//
//	struct stu b = { "fengjinlong",21,100.1 };
//	struct stu* pb = &b;
//	printf("%s %d %f\n", pb->name, pb->age, pb->grade);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int x = 0;
//	int min = 0;
//	scanf("%d", &n);
//	x = n / 12;
//	min = x * 4 + 2;
//	printf("%d\n", min);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	ret = printf("Hello world!\n");
//	printf("%d\n", ret);
//	return 0;
//}
//a~z 97~122
//A~Z 65~90

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		if ((ch >= 65 && ch <= 90)||(ch>=97 && ch<=122))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}

//������䣺˳����䡢ѡ�����(if\switch)��ѭ�����(while\do while\for)

//break������ֹѭ����
//continue������������ѭ������Ĳ��֣�ֱ��������һ��ѭ�����жϲ���

//int main()
//{
//	//��ջ�����
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;//k=0,Ҳ���Ǳ��ʽ��ֵΪ0���жϲ�ͨ��
//	}
//	return 0;
//}

//�۰���ҷ�
