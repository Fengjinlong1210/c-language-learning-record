#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	void Init(int year, int month, int day);

	void Print();

	void TestThisptr();
private:
	int _year;
	int _month;
	int _day;
};

class test
{
public:
	void Print()
	{
		cout << "print test" << endl;
	}

	void PrintMember()
	{
		cout << _test << endl;
	}
private:
	int _test;
};

class Stack
{
public:
	//��ʼ��
	void Init(int capacity = 4);

	//��ջ
	void Push(int val);

	//��ջ
	void Pop();

	//ջ��
	int TopOfStack();

	//�п�
	bool isEmpty();

	//����
	void Destroy();

	//����
	void Expand();


private:
	int* _data;
	int _top;
	int _capacity;
};