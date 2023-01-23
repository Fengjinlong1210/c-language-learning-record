#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"


void menu()
{
	printf("**********************\n");
	printf("****   1. add     ****\n");
	printf("****   2. del     ****\n");
	printf("****   3.search   ****\n");
	printf("****   4. sort    ****\n");
	printf("****   5. show    ****\n");
	printf("****   6. mdfy    ****\n");
	printf("****   0. exit    ****\n");
	printf("**********************\n");
}

void menu2()
{
	printf("**********************\n");
	printf("****1. 按姓名排序  ****\n");
	printf("****2. 按年龄排序  ****\n");
	printf("**********************\n");
}

void init_struct(contacts* con)
{
	con->sz = 0;
	con->maxsz = ORI_SZ;
	con->data = (peoinfo*)calloc(ORI_SZ, sizeof(peoinfo));
	//把data数组全部初始化为0
	if (!con->data)
	{
		perror("init err:");
	}
	//读取文件中的数据
	load_data(con);
}

void check_sz(contacts* con)
{
	if (con->maxsz==con->sz)
	{
		//扩容
		peoinfo* str = (peoinfo*)realloc(con->data, sizeof(peoinfo) * (con->maxsz + ADD_SZ));
		if (!str)
		{
			perror("realloc:");
			return;
		}
		else
		{
			con->data = str;
			con->maxsz += ADD_SZ;
			printf("扩容成功\n");
		}
	}
	else
	{
		return;
	}
}

void add_contact(contacts* con)
{
	//判断是否存满,并且扩容
	check_sz(con);
	printf("请输入联系人姓名：\n");
	scanf("%s", con->data[con->sz].name);
	printf("请输入联系人年龄：\n");
	scanf("%d", &con->data[con->sz].age);
	printf("请输入联系人电话：\n");
	scanf("%s", con->data[con->sz].phnum);
	printf("请输入联系人地址：\n");
	scanf("%s", con->data[con->sz].addrs);
	con->sz++;
	system("cls");

	printf("添加成功\n");

}

void show_contact(contacts* con)
{
	int i = 0;
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-20s\t\n", "姓名", "年龄", "电话", "地址");
		printf("---------------------------------------------------\n");
		for (i = 0; i < con->sz; i++)//根据个数打印
		{
			printf("%-20s\t%-5d\t%-12s\t%-20s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].phnum,
				con->data[i].addrs);
		}
	}
}

void dele_contact(contacts* con)
{
	char tmp[20] = { 0 };
	int ret = 0;
	if (con->sz == 0)
	{
		printf("没有可删除的联系人\n");
	}
	else
	{
		printf("请输入要删除的联系人姓名:\n");
		scanf("%s", tmp);
		ret = find_contact(con, tmp);//判断是否存在
		//返回联系人所在的数组下标
		if (ret == -1)
		{
			printf("不存在该联系人\n");
		}
		else
		{
			//删除(将后面所有元素向前移动一个单位)
			memmove(&(con->data[ret]), &(con->data[ret + 1]), (con->sz - 1) * sizeof(peoinfo));
			con->sz--;
		}
	}
}

void search_contact(contacts* con)
{
	char tmp[20] = { 0 };
	printf("请输入查找的联系人姓名:\n");
	scanf("%s", tmp);
	int ret = find_contact(con, tmp);
	if (ret == -1)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-20s\t\n", "姓名", "年龄", "电话", "地址");
		printf("---------------------------------------------------\n");
		printf("%-20s\t%-5d\t%-12s\t%-20s\n",
			con->data[ret].name,
			con->data[ret].age,
			con->data[ret].phnum,
			con->data[ret].addrs);
	}
}

void sort_contact(contacts* con)
{
	int input = 0;
	menu2();
	scanf("%d", &input);
	switch (input)
	{
	case 1://根据姓名
		qsort(con->data, con->sz, sizeof(con->data[0]), cmp_name);
		printf("排序成功\n");
		break;
	case 2://根据年龄
		qsort(con->data, con->sz, sizeof(con->data[0]), cmp_age);
		printf("排序成功\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
}

void mdfy_contact(contacts* con)
{
	char tmp[20] = { 0 };
	int ret = 0;
	printf("请输入要修改的联系人姓名:\n");
	scanf("%s", tmp);
	ret = find_contact(con, tmp);
	if (ret == -1)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("请输入修改后的联系人姓名：\n");
		scanf("%s", con->data[ret].name);
		printf("请输入修改后的联系人年龄：\n");
		scanf("%d", &con->data[ret].age);
		printf("请输入修改后的联系人电话：\n");
		scanf("%s", con->data[ret].phnum);
		printf("请输入修改后的联系人地址：\n");
		scanf("%s", con->data[ret].addrs);
		printf("修改成功\n");
	}
}

int find_contact(contacts* con, char* name)
{
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;//返回同名联系人的下标
		}
	}
	return -1;//不存在
}

void clear_contacts(contacts* con)
{
	if (con->sz == 0)
	{
		printf("没有可清空的联系人\n");
	}
	else
	{
		con->sz = 0;
		memset(con->data, 0, sizeof(con->data));
	}
}

int cmp_name(const void* p1, const void* p2)
{
	return (strcmp(((contacts*)p1)->data->name, ((contacts*)p2)->data->name));
	//转换成结构体指针，找到对应成员
}

int cmp_age(const void* p1, const void* p2)
{
	return (((contacts*)p1)->data->age - ((contacts*)p2)->data->age);
}

void save_contact(contacts* con)
{
	int i = 0;
	FILE* pf = fopen("data.txt", "wb");
	if (!pf)
	{
		perror("fopen");
		return;
	}
	else
	{
		for (i = 0; i < con->sz; i++)
		{
			fwrite(con->data + i, sizeof(peoinfo), 1, pf);
		}
		fclose(pf);
		pf = NULL;
	}
}

void free_contact(contacts* con)
{
	free(con->data);
	con->data = NULL;
}

void load_data(contacts* con)
{
	FILE* pf = fopen("data.txt", "rb");
	if (!pf)
	{
		perror("fopen");
		return;
	}
	else
	{
		int i = 0;
		peoinfo tmp = { 0 };
		while (fread(&tmp, sizeof(peoinfo), 1, pf))
		{
			con->data[i] = tmp;
			i++;
			con->sz++;
			check_sz(con);
		}
		fclose(pf);
		pf = NULL;
	}
}