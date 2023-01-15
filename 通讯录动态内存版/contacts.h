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
	int sz;//记录联系人个数
	int maxsz;//记录目前最大容量
}contacts;

//目录
void menu();

//初始化
void init_struct(contacts* con);

//增加联系人
void add_contact(contacts* con);

//展示通讯录
void show_contact(contacts* con);

//删除指定联系人
void dele_contact(contacts* con);

//查找联系人返回坐标
int find_contact(contacts* con, char* name);

//搜索联系人
void search_contact(contacts* con);

//排序联系人
void sort_contact(contacts* con);

//比较函数
int cmp_name(const void* p1, const void* p2);
int cmp_age(const void* p1, const void* p2);

//修改联系人信息
void mdfy_contact(contacts* con);

//清空所有联系人
void clear_contacts(contacts* con);