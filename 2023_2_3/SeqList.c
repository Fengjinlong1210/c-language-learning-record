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
	//���ٿռ�
	AddCapacity(ps);

	ps->data[ps->sz] = num;
	ps->sz++;
}

void AddCapacity(SeqList* ps)
{
	assert(ps);
	//�������
	if (ps->sz == ps->capacity)
	{
		//����
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
			printf("���ݳɹ�\n");
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
	//ȥ��β������
	//ps->data[ps->sz - 1] = 0;
	ps->sz--;
	printf("ɾ���ɹ�\n");
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
	
	//��������
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
	//ǰ������
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
	//����
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
		printf("Խ��\n");
		return;
	}
	AddCapacity(ps);

	//����pos�ұߵ����ݣ�����pos��
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
		printf("Խ��\n");
		return;
	}

	//ɾ��posλ�õ�����
	//�Ѻ��������ǰ��
	int i = 0;
	for (i = 0; i < ps->sz - pos - 1; i++)
	{
		ps->data[pos + i] = ps->data[pos + i + 1];
	}
	ps->sz--;
}