#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

void menu()
{
	printf("----------------------------\n");
	printf("-----     1. ����      -----\n");
	printf("-----     2. ɾ��      -----\n");
	printf("-----	  3. ����      -----\n");
	printf("-----     4. �޸�      -----\n");
	printf("-----     5. ��ӡ      -----\n");
	printf("-----     6. ����      -----\n");
	printf("-----     0. �˳�      -----\n");
	printf("----------------------------\n");
}

void init_contact(contact* pc)
{
	peoinfo* tmp = NULL;
	pc->sz = 0;
	pc->capacity = MAX_SZ;
	tmp = (peoinfo*)calloc(MAX_SZ, sizeof(peoinfo));
	if (tmp)
	{
		pc->data = tmp;
	}
	else
	{
		perror("init_contact");
		return;
	}
	load_data(pc);
}

void add_contact(contact* pc)
{
	//���ݺ���
	add_capacity(pc);
	//��ȡ����
	printf("����������:");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:");
	scanf("%d", &pc->data[pc->sz].age);
	printf("������绰:");
	scanf("%s", pc->data[pc->sz].phnum);
	printf("������סַ:");
	scanf("%s", pc->data[pc->sz].address);
	pc->sz++;
}

void add_capacity(contact* pc)
{
	if (pc->capacity == pc->sz)
	{
		//��������
		peoinfo* tmp = NULL;
		tmp = (peoinfo*)realloc(&pc->data[0], (pc->capacity + ADD_SZ)*sizeof(peoinfo));
		if (!tmp)
		{
			perror("add_capacity");
			return;
		}
		else
		{
			pc->capacity += ADD_SZ;
			pc->data = tmp;
			//printf("���ݳɹ�\n");
		}
	}
	else
	{
		return;
	}
}

void show_contact(contact* pc)
{
	int i = 0;
	printf("%-20s %-5s %-12s %-20s\n", "����", "����", "�绰", "סַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-5d %-12s %-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].phnum,
			pc->data[i].address);
	}
}

void del_contact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int ret = 0;
		char tmp[NAME] = { 0 };
		printf("������Ҫɾ������ϵ�˵�������");
		scanf("%s", tmp);
		//������ϵ���Ƿ����
		ret = find_contact(pc, tmp);
		if (ret != -1)
		{
			//ɾ��
			memmove(&(pc->data[ret]), 
				&(pc->data[ret + 1]), 
				sizeof(peoinfo) * (pc->sz - ret));
			pc->sz--;
		}
		else
		{
			printf("�����ڸ���ϵ��\n");
		}
	}


}

int find_contact(contact* pc, char* str)
{
	int i = 0; 
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, str) == 0)
			return i;
		//�����ҵ����±�
	}
	return -1;
}

void srch_contact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		int flag = 0;
		char tmp[20] = { 0 };
		printf("��������������ϵ��������");
		scanf("%s", tmp);
		for (i = 0; i < pc->sz; i++)
		{
			if (strcmp(pc->data[i].name, tmp) == 0)
			{
				printf("%-20s %-5s %-12s %-20s\n", "����", "����", "�绰", "סַ");
				printf("%-20s %-5d %-12s %-20s\n",
					pc->data[i].name,
					pc->data[i].age,
					pc->data[i].phnum,
					pc->data[i].address);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			printf("�����ڸ���ϵ��\n");
		}

	}
}

void mdfy_contact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int ret = 0;
		char tmp[20] = { 0 };
		printf("������Ҫ�޸ĵ���ϵ��\n");
		scanf("%s", tmp);
		ret = find_contact(pc, tmp);
		if (ret == -1)
		{
			printf("�����ڸ���ϵ��\n");
		}
		else
		{
			printf("�������޸ĺ������:");
			scanf("%s", pc->data[ret].name);
			printf("�������޸ĺ������:");
			scanf("%d", &pc->data[ret].age);
			printf("�������޸ĺ�ĵ绰:");
			scanf("%s", pc->data[ret].phnum);
			printf("�������޸ĺ��סַ:");
			scanf("%s", pc->data[ret].address);
		}
	}
}

void sort_contact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int input = 0;
		do 
		{
			printf("��ѡ��\n");
			sort_menu();
			scanf("%d", &input);
			switch (input)
			{
			case STNAME:
				sort_by_name(pc);
				printf("����ɹ�\n");
				input = 0;
				break;
			case STAGE:
				sort_by_age(pc);
				printf("����ɹ�\n");
				input = 0;
				break;
			case EXIT:
				break;
			default:
				printf("�����������������\n");
			}
		} while (input);
	}
}

void sort_menu()
{
	printf("-----------------------------\n");
	printf("-----  1. ����������    -----\n");
	printf("-----  2. ����������    -----\n");
	printf("-----  0. �˳�����      -----\n");
	printf("-----------------------------\n");
}

void sort_by_name(contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz-1 ; i++)
	{
		for (j = 0; j < pc->sz - i - 1; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				swap(&pc->data[j], &pc->data[j + 1], sizeof(pc->data[0]));
			}
		}
	}
}

void sort_by_age(contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		for (j = 0; j < pc->sz - i - 1; j++)
		{
			if (pc->data[j].age - pc->data[j + 1].age > 0)
			{
				swap(&(pc->data[j]), &(pc->data[j + 1]), sizeof(pc->data[0]));
			}
		}
	}
}

void swap(void* p1, void* p2, int num)
{
	char* tmp = NULL;
	tmp = calloc(1, sizeof(peoinfo));
	if (!tmp)
	{
		perror("swap:");
		return;
	}
	else
	{
		memcpy(tmp, p1, sizeof(peoinfo));
		memcpy(p1, p2, sizeof(peoinfo));
		memcpy(p2, tmp, sizeof(peoinfo));
		free(tmp);
		tmp = NULL;
	}
}

void free_contact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}

void serve_contact(contact* pc)
{
	FILE* pf = fopen("data.txt", "wb");
	if (!pf)
	{
		perror("serve_contact : fopen");
		return;
	}
	else
	{
		//д������
		int i = 0;
		for (i = 0; i < pc->sz; i++)
		{
			fwrite(pc->data + i, sizeof(peoinfo), 1, pf);
		}
		fclose(pf);
		pf = NULL;
	}
}

void load_data(contact* pc)
{
	FILE* pf = fopen("data.txt", "rb");
	if (!pf)
	{
		perror("load_data:fopen");
		return;
	}
	else
	{
		int i = 0;
		char* tmp = NULL;
		tmp = calloc(1, sizeof(peoinfo));
		if (!tmp)
		{
			perror("load_data : calloc");
			return;
		}
		else
		{
			//��������
			while (fread(tmp, sizeof(peoinfo), 1, pf))
			{
				memcpy(pc->data + i, tmp, sizeof(peoinfo));
				pc->sz++;
				i++;
				//�������
				add_capacity(pc);
			}
			//printf("�������\n");
		}

	}
}