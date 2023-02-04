#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void InitSeqList(SeqList* ps)
{
	assert(ps);
	ps->sz = 0;
	ps->capacity = 0;
	ps->data = NULL;
}

void PushBack(SeqList* ps, datatype num)
{
	assert(ps);
	//开辟空间
	AddCapacity(ps);

	ps->data[ps->sz] = num;
	ps->sz++;
}

void AddCapacity(SeqList* ps)
{
	assert(ps);
	//检查容量
	if (ps->sz == ps->capacity)
	{
		//扩容
		int newcapacity = (ps->capacity == 0) ? DFLT_CAP : ps->capacity + ADD_CAP;
		datatype* tmp = (datatype*)realloc(ps->data, sizeof(datatype) * newcapacity);
		if (!tmp)
		{
			perror("realloc");
			return;
		}
		else
		{
			ps->data = tmp;
			ps->capacity = newcapacity;
			printf("扩容成功\n");
		}
	}
	else
	{
		return;
	}
}

void PopBack(SeqList* ps)
{
	assert(ps);
	if (ps->sz == 0)
	{
		perror("PopBack");
		return;
	}
	//去除尾部数据
	//ps->data[ps->sz - 1] = 0;
	ps->sz--;
	printf("删除成功\n");
}

void Destroy(SeqList* ps)
{
	assert(ps);
	if (ps->data == NULL) 
	{
		return;
	}
	else
	{
		free(ps->data);
		perror("free");
		ps->data = NULL;
		ps->sz = 0;
		ps->capacity = 0;
	}
}

void Print(SeqList* ps)
{
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}

void PushFront(SeqList* ps, datatype num)
{
	assert(ps);
	AddCapacity(ps);
	
	//后移数据
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		datatype tmp = 0;
		ps->data[ps->sz - i] = ps->data[ps->sz - i - 1];
	}
	ps->data[0] = num;
	ps->sz++;
}

void PopFront(SeqList* ps)
{
	assert(ps);
	assert(ps->sz > 0);
	//前移数据
	int i = 0;
	for (i = 0; i < ps->sz - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->sz--;
}

datatype SeqListFind(SeqList* ps, datatype num, int pos)
{
	assert(ps);
	assert(ps->sz > 0);
	//遍历
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (ps->data[i] == num)
		{
			return i;
		}
	}
	//printf("nonexistence\n");
	return -1;
}

void PosInsert(SeqList* ps, int pos, datatype num)
{
	assert(ps);
	assert(ps->sz > 0);

	if (pos >= ps->sz || pos < 0)
	{
		printf("越界\n");
		return;
	}
	AddCapacity(ps);

	//右移pos右边的数据（包含pos）
	int i = 0;
	for (i = 0; i < ps->sz - pos; i++)
	{
		ps->data[ps->sz - i] = ps->data[ps->sz - i - 1];
	}
	ps->data[pos] = num;
	ps->sz++;
}


void PosDelete(SeqList* ps, int pos)
{
	assert(ps);
	assert(ps->sz > 0);
	if (pos >= ps->sz || pos < 0)
	{
		printf("越界\n");
		return;
	}

	//删除pos位置的数字
	//把后面的数据前移
	int i = 0;
	for (i = 0; i < ps->sz - pos - 1; i++)
	{
		ps->data[pos + i] = ps->data[pos + i + 1];
	}
	ps->sz--;
}