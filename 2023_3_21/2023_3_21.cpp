#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

//�����ռ�  ��׼���е�std
using namespace std;

namespace fjl
{
	int a = 10;
	char name[] = "fengjinlong";
	int add(int a, int b)
	{
		return a + b;
	}
}

//����������ͬ�������ռ䣬���������Զ��ϳ�

namespace fjl
{
	int b = 100;
}

namespace zs
{
	//�����ռ�Ƕ��
	int a = 10;
	char name[] = "zhangsan";
	namespace zs1 
	{
		int b = 20;
		int a = 15;
	}
}

void Func(int a = 10, int b = 20, int c = 30)
//ȫȱʡ
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void Func2(int a, int b, int c = 10, int d = 20)
//��ȱʡ
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

}

int main()
{
	//ȫȱʡ������
	Func2(1,2,3);//���������Ҹ�ֵ
	return 0;
}

//int main()
//{
//	////��һ�������ռ�ʹ�÷�����ֱ��ʹ�����������ռ�
//	//cout << "hello world" << endl;
//
//	////�ڶ���: ��ʹ�õ�ʱ��ǰ��ӿ������::
//	//std::cout << "hello world" << std::endl;
//
//	////�����֣��������� �� using std::cout
//
//	//cout << "a = " << fjl::a << endl;
//	//cout << "name = " << fjl::name << endl;
//	//cout << "10+20 = " << fjl::add(10, 20) << endl;
//
//	//cout << zs::a << endl;
//	//cout << zs::name << endl;
//	//cout << zs::zs1::a << endl;
//	//cout << zs::zs1::b << endl;
//	int a = 0;
//	int b = 0;
//	cin >> a;
//	cin >> b;
//	cout << fjl::add(a, b) << endl;
//	return 0;
//}