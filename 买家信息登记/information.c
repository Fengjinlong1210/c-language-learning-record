#define _CRT_SECURE_NO_WARNINGS 1
#include "information.h"

void InitList(list* pl)
{
	assert(pl);
	pl->size = 0;
	pl->capacity = 4;
	ppi* tmp = (ppi*)malloc(sizeof(ppi) * pl->capacity);
	if (!tmp)
	{
		perror("�ڴ濪��ʧ�ܣ�������\n");
		return;
	}
	pl->data = tmp;
}

void CheckCapacity(list* pl)
{
	assert(pl);
	if (pl->capacity == pl->size)
	{
		int newcapacity = pl->capacity + 4;
		ppi* tmp = (ppi*)realloc(pl->data, sizeof(ppi) * newcapacity);
		if (!tmp)
		{
			perror("�ڴ濪��ʧ��\n");
			return;
		}
		pl->data = tmp;
		pl->capacity = newcapacity;
	}
}

void Input(list* pl)
{
	assert(pl);
	CheckCapacity(pl);
	printf("���������� ��");
	scanf("%s", pl->data[pl->size].name);
	printf("�������ַ ��");
	scanf("%s", pl->data[pl->size].address);

	printf("������绰 ��");
	scanf("%s", pl->data[pl->size].number);

	printf("��������Ʒ ��");
	scanf("%s", pl->data[pl->size].goods);

	pl->size++;
	//��������
	fflush(stdin);
}

void Delete(list* pl)
{
	assert(pl);
	if (pl->size <= 0)
	{
		printf("���޿�ɾ�����û�!\n");
		return;
	}
	char sname[20] = {0};
	printf("������Ҫɾ�������������");
	scanf("%s", sname);
	fflush(stdin);

	int i = 0;
	for (i = 0; i < pl->size; i++)
	{
		int ret = strcmp(sname, pl->data[i].name);
		if (ret == 0)
		{
			memmove(&pl->data[i], &pl->data[i + 1], sizeof(ppi) * (pl->size - i));
			pl->size--;
			return;
		}
	}
	printf("�������˲�����!\n");
}

void Print(list* pl)
{
	assert(pl);
	if (pl->size <= 0)
	{
		printf("�����û���Ϣ\n");
	}
	int i = 0;
	printf("%-10s %-20s %-15s %-70s\n", "����", "��ַ", "�绰", "��Ʒ");
	for (i = 0; i < pl->size; i++)
	{
		printf("%-10s %-20s %-15s %-50s\n",
			pl->data[i].name,
			pl->data[i].address,
			pl->data[i].number,
			pl->data[i].goods);
	}
}

void Search(list* pl)
{
	assert(pl);
	if (pl->size <= 0)
	{
		printf("�����û���Ϣ\n");
		return;
	}
	printf("����������˵����� :");
	char sname[20];
	scanf("%s", sname);
	int i = 0;
	for (i = 0; i < pl->size; i++)
	{
		if (strcmp(sname, pl->data[i].name) == 0)
		{
			printf("%-10s %-20s %-15s %-70s\n", "����", "��ַ", "�绰", "��Ʒ");
			printf("%-10s %-20s %-15s %-50s\n",
				pl->data[i].name,
				pl->data[i].address,
				pl->data[i].number,
				pl->data[i].goods);
			return;
		}
	}
	printf("���û�������\n");
}

void Modify(list* pl)
{
	assert(pl);
	if (pl->size <= 0)
	{
		printf("�����û���Ϣ\n");
		return;
	}
	printf("������Ҫ�޸ĵ��û����� ��");
	char sname[20] = { 0 };
	scanf("%s", sname);
	fflush(stdin);
	int ret = Find(pl, sname);
	if (ret == -1)
	{
		printf("�����ڸ��û�\n");
	}
	printf("�������޸ĺ������ ��");
	scanf("%s", pl->data[ret].name);
	printf("�������޸ĺ�ĵ�ַ ��");
	scanf("%s", pl->data[ret].address);

	printf("�������޸ĺ�ĵ绰 ��");
	scanf("%s", pl->data[ret].number);

	printf("�������޸ĺ����Ʒ ��");
	scanf("%s", pl->data[ret].goods);
}

int Find(list* pl, char* sname)
{
	assert(pl);
	int i = 0;
	for (i = 0; i < pl->size; i++)
	{
		if (strcmp(pl->data[i].name, sname) == 0)
		{
			return i;
		}
	}
	return -1;
}