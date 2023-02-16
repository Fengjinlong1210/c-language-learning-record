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
		perror("内存开辟失败，请重试\n");
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
			perror("内存开辟失败\n");
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
	printf("请输入姓名 ：");
	scanf("%s", pl->data[pl->size].name);
	printf("请输入地址 ：");
	scanf("%s", pl->data[pl->size].address);

	printf("请输入电话 ：");
	scanf("%s", pl->data[pl->size].number);

	printf("请输入商品 ：");
	scanf("%s", pl->data[pl->size].goods);

	pl->size++;
	//清理缓冲区
	fflush(stdin);
}

void Delete(list* pl)
{
	assert(pl);
	if (pl->size <= 0)
	{
		printf("暂无可删除的用户!\n");
		return;
	}
	char sname[20] = {0};
	printf("请输入要删除的买家姓名：");
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
	printf("被查找人不存在!\n");
}

void Print(list* pl)
{
	assert(pl);
	if (pl->size <= 0)
	{
		printf("暂无用户信息\n");
	}
	int i = 0;
	printf("%-10s %-20s %-15s %-70s\n", "姓名", "地址", "电话", "商品");
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
		printf("暂无用户信息\n");
		return;
	}
	printf("请输入查找人的姓名 :");
	char sname[20];
	scanf("%s", sname);
	int i = 0;
	for (i = 0; i < pl->size; i++)
	{
		if (strcmp(sname, pl->data[i].name) == 0)
		{
			printf("%-10s %-20s %-15s %-70s\n", "姓名", "地址", "电话", "商品");
			printf("%-10s %-20s %-15s %-50s\n",
				pl->data[i].name,
				pl->data[i].address,
				pl->data[i].number,
				pl->data[i].goods);
			return;
		}
	}
	printf("此用户不存在\n");
}

void Modify(list* pl)
{
	assert(pl);
	if (pl->size <= 0)
	{
		printf("暂无用户信息\n");
		return;
	}
	printf("请输入要修改的用户姓名 ：");
	char sname[20] = { 0 };
	scanf("%s", sname);
	fflush(stdin);
	int ret = Find(pl, sname);
	if (ret == -1)
	{
		printf("不存在该用户\n");
	}
	printf("请输入修改后的姓名 ：");
	scanf("%s", pl->data[ret].name);
	printf("请输入修改后的地址 ：");
	scanf("%s", pl->data[ret].address);

	printf("请输入修改后的电话 ：");
	scanf("%s", pl->data[ret].number);

	printf("请输入修改后的商品 ：");
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