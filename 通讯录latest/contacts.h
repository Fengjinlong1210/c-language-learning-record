#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SZ 3
#define ADD_SZ 2
#define NAME 20
#define PHNUM 12
#define ADDRESS 20


typedef struct peoinfo
{
	char name[NAME];
	int age;
	char phnum[PHNUM];
	char address[ADDRESS];
}peoinfo;

typedef struct contact
{
	int sz;
	int capacity;
	peoinfo* data;
}contact;

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MDFY,
	SHOW,
	SORT
};

enum sort
{
	STNAME=1,
	STAGE
};

//Ŀ¼
void menu();

//��ʼ��
void init_contact(contact* pc);

//������ϵ��
void add_contact(contact* pc);

//����
void add_capacity(contact* pc);

//��ӡ
void show_contact(contact* pc);

//ɾ��
void del_contact(contact* pc);

//������ϵ���Ƿ����
int find_contact(contact* pc, char* str);

//����
void srch_contact(contact* pc);

//�޸���ϵ����Ϣ
void mdfy_contact(contact* pc);

//������ϵ��
void sort_contact(contact* pc);

//����Ŀ¼
void sort_menu();

//����������
void sort_by_name(contact* pc);

//����������
void sort_by_age(contact* pc);

//������
int cmp_by_name(const void* p1, const void* p2);

int cmp_by_age(const void* p1, const void* p2);

void swap(void* p1, void* p2, int num);

//�ͷ��ڴ�
void free_contact(contact* pc);

//������ϵ��
void serve_contact(contact* pc);

//�����ļ�����
void load_data(contact* pc);
