#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdbool.h>
using namespace std;

/*
��Ͷ���

���캯������������
���캯������ͬ��������Ҫ����ֵ������������ʱ�Զ����ã�������ʼ����ĳ�Ա
���캯�����Ժ�������

��������������ǰ����~  ���ڶ����������ڽ���ʱ�Զ����ã�����������ĳ�Ա
*/


//�����ù��캯������Ҫ�����ʼ����������ÿ��������������Ҫ����
/*
class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day<< endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2;

	d1.Init(2023, 3, 10);
	d2.Init(2023, 3, 29);

	d1.Print();
	d2.Print();
}
*/

//ʹ�ù��캯��
/*
typedef class DateWithConstructor
{
public:
	//���캯��֧�ֺ������أ�ȱʡֵ

	//�޲ι��캯����ȫȱʡ���캯������ΪĬ�Ϲ��캯��
	//Ĭ�Ϲ��캯��ֻ����һ��������
	//���ԣ������޲εĹ��캯��ʱ������ʹ��ȫȱʡ���������޷�ʶ���������һ�����캯��
	DateWithConstructor()
	{
		_year = 9999;
		_month = 9999;
		_day = 9999;
	}
	DateWithConstructor(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
}DWC;

int main()
{
	//DWC d1; �ᱨ��
	//��Ϊͬʱ��������Ĭ�Ϲ��캯�����޲ι��캯����ȫȱʡ���캯����
	DWC d2(2023, 1, 10);
	return 0;
}
*/

/*
typedef class DateWithConstructor
{
public:
	DateWithConstructor()
	{
		_year = 9999;
		_month = 9999;
		_day = 9999;
	}
	DateWithConstructor(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
}DWC;

int main()
{
	DWC d1;//�����޲εĹ��캯��
	DWC d2(2023, 1, 10);//�вεĹ��캯��
	return 0;
}
*/

/*
������Ĭ�ϵĹ��캯��

class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// ��������(��������)  �����г�ʼ�����������������Ǹ���ֵ
	int _year = 1;
	int _month = 1;
	int _day = 1;
	// �Զ�������
	Time _t;
};
int main()
{
	Date d1;
	//Ĭ�ϵĹ��캯���γ������ֵ
	//��������Ϊ�����������������ͽ��г�ʼ��

	//����d1�е�Time���_t�����˳�ʼ��
	return 0;
}

*/

/*
��������
�������Դ��������������������������ͣ����Ƕ���������Դ���Զ�������
����Ҫ�༭�������������������ڴ�й©
*/

//�ù��캯������������ʵ��Stack
typedef int STDatatype;

class Stack
{
public:
	void Push(STDatatype val)
	{
		CheckCapacity();
		_data[_top++] = val;
	}

	void Pop()
	{
		if (isEmpty())
		{
			return;
		}
		_top--;
	}

	STDatatype Top()
	{
		if (isEmpty())
		{
			printf("NULL\n");
			return -1;
		}
		return _data[_top - 1];
	}

	bool isEmpty()
	{
		return _top == 0;
	}

	void CheckCapacity()
	{
		if (_top != _capacity)
		{
			return;
		}
		_capacity *= 2;
		STDatatype* tmp = (STDatatype*)realloc(_data, sizeof(STDatatype) * _capacity);
		if (!tmp)
		{
			return;
		}
		_data = tmp;
	}

	Stack(int capacity = 4)
	{
		_capacity = capacity;
		STDatatype* tmp = (STDatatype*)malloc(sizeof(STDatatype) * capacity);
		if (!tmp)
		{
			perror("malloc");
			return;
		}
		_data = tmp;
		_top = 0;
	}

	~Stack()
	{
		STDatatype* tmp = _data;
		free(tmp);
		_data = nullptr;
		_top = _capacity = 0;
	}

private:
	STDatatype* _data = nullptr;
	int _top = 0;
	int _capacity;
};

int main()
{
	Stack st1;//ʹ�ù��캯����ȫȱʡ���Զ����г�ʼ��
	Stack st2(8);//ָ����ʼ��

	st1.Push(1);
	st1.Push(2);
	st1.Push(3);
	st1.Push(4);
	st1.Push(5);
	st1.Push(6);
	st1.Pop();
	st1.Pop();
	st1.Pop();
	st1.Pop();

	return 0;
}