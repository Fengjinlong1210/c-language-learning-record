#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_PHNUM 12
#define MAX_ADDRS 20
#define ORI_SZ 3
#define ADD_SZ 2

typedef struct people
{
	char name[MAX_NAME];
	int age;
	char phnum[MAX_PHNUM];
	char addrs[MAX_ADDRS];
}peoinfo;

typedef struct contacts
{
	peoinfo* data;
	int sz;//��¼��ϵ�˸���
	int maxsz;//��¼Ŀǰ�������
}contacts;

//Ŀ¼
void menu();

//��ʼ��
void init_struct(contacts* con);

//������ϵ��
void add_contact(contacts* con);

//չʾͨѶ¼
void show_contact(contacts* con);

//ɾ��ָ����ϵ��
void dele_contact(contacts* con);

//������ϵ�˷�������
int find_contact(contacts* con, char* name);

//������ϵ��
void search_contact(contacts* con);

//������ϵ��
void sort_contact(contacts* con);

//�ȽϺ���
int cmp_name(const void* p1, const void* p2);
int cmp_age(const void* p1, const void* p2);

//�޸���ϵ����Ϣ
void mdfy_contact(contacts* con);

//���������ϵ��
void clear_contacts(contacts* con);