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
	printf("****1. ����������  ****\n");
	printf("****2. ����������  ****\n");
	printf("**********************\n");
}

void init_struct(contacts* con)
{
	con->sz = 0;
	con->maxsz = ORI_SZ;
	con->data = (peoinfo*)calloc(ORI_SZ, sizeof(peoinfo));
	//��data����ȫ����ʼ��Ϊ0
	if (!con->data)
	{
		perror("init err:");
	}
	//��ȡ�ļ��е�����
	load_data(con);
}

void check_sz(contacts* con)
{
	if (con->maxsz==con->sz)
	{
		//����
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
			printf("���ݳɹ�\n");
		}
	}
	else
	{
		return;
	}
}

void add_contact(contacts* con)
{
	//�ж��Ƿ����,��������
	check_sz(con);
	printf("��������ϵ��������\n");
	scanf("%s", con->data[con->sz].name);
	printf("��������ϵ�����䣺\n");
	scanf("%d", &con->data[con->sz].age);
	printf("��������ϵ�˵绰��\n");
	scanf("%s", con->data[con->sz].phnum);
	printf("��������ϵ�˵�ַ��\n");
	scanf("%s", con->data[con->sz].addrs);
	con->sz++;
	system("cls");

	printf("��ӳɹ�\n");

}

void show_contact(contacts* con)
{
	int i = 0;
	if (con->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�绰", "��ַ");
		printf("---------------------------------------------------\n");
		for (i = 0; i < con->sz; i++)//���ݸ�����ӡ
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
		printf("û�п�ɾ������ϵ��\n");
	}
	else
	{
		printf("������Ҫɾ������ϵ������:\n");
		scanf("%s", tmp);
		ret = find_contact(con, tmp);//�ж��Ƿ����
		//������ϵ�����ڵ������±�
		if (ret == -1)
		{
			printf("�����ڸ���ϵ��\n");
		}
		else
		{
			//ɾ��(����������Ԫ����ǰ�ƶ�һ����λ)
			memmove(&(con->data[ret]), &(con->data[ret + 1]), (con->sz - 1) * sizeof(peoinfo));
			con->sz--;
		}
	}
}

void search_contact(contacts* con)
{
	char tmp[20] = { 0 };
	printf("��������ҵ���ϵ������:\n");
	scanf("%s", tmp);
	int ret = find_contact(con, tmp);
	if (ret == -1)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�绰", "��ַ");
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
	case 1://��������
		qsort(con->data, con->sz, sizeof(con->data[0]), cmp_name);
		printf("����ɹ�\n");
		break;
	case 2://��������
		qsort(con->data, con->sz, sizeof(con->data[0]), cmp_age);
		printf("����ɹ�\n");
		break;
	default:
		printf("�����������������\n");
		break;
	}
}

void mdfy_contact(contacts* con)
{
	char tmp[20] = { 0 };
	int ret = 0;
	printf("������Ҫ�޸ĵ���ϵ������:\n");
	scanf("%s", tmp);
	ret = find_contact(con, tmp);
	if (ret == -1)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("�������޸ĺ����ϵ��������\n");
		scanf("%s", con->data[ret].name);
		printf("�������޸ĺ����ϵ�����䣺\n");
		scanf("%d", &con->data[ret].age);
		printf("�������޸ĺ����ϵ�˵绰��\n");
		scanf("%s", con->data[ret].phnum);
		printf("�������޸ĺ����ϵ�˵�ַ��\n");
		scanf("%s", con->data[ret].addrs);
		printf("�޸ĳɹ�\n");
	}
}

int find_contact(contacts* con, char* name)
{
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;//����ͬ����ϵ�˵��±�
		}
	}
	return -1;//������
}

void clear_contacts(contacts* con)
{
	if (con->sz == 0)
	{
		printf("û�п���յ���ϵ��\n");
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
	//ת���ɽṹ��ָ�룬�ҵ���Ӧ��Ա
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