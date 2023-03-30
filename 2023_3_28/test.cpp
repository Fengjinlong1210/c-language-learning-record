#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

void Date::Init(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day << "/" << endl;
}

void Date::TestThisptr()
{
	cout << "this ptr:" << this << endl;
	cout << this->_year << endl;
	cout << this->_month << endl;
	cout << this->_day << endl;


}

void Stack::Init(int capacity)
{
	this->_top = 0;
	this->_capacity = capacity;
	int* tmp = (int*)malloc(sizeof(int) * capacity);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	_data = tmp;
}

bool Stack::isEmpty()
{
	return _top == 0;
}

void Stack::Expand()
{
	if (_top != _capacity)
	{
		return;
	}
	int* tmp = (int*)realloc(_data, sizeof(int) * (_capacity * 2));
	if (!tmp)
	{
		perror("realloc");
		return;
	}
	_data = tmp;
	_capacity *= 2;
}

void Stack::Push(int val)
{
	Expand();
	_data[_top++] = val;
}

void Stack::Pop()
{
	if (isEmpty())
	{
		return;
	}
	_top--;
}

int Stack::TopOfStack()
{
	return _data[_top - 1];
}

void Stack::Destroy()
{
	if (_data)
	{
		_top = _capacity = 0;
		free(_data);
		_data = nullptr;
	}
}
