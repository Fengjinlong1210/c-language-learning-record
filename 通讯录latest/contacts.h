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

//目录
void menu();

//初始化
void init_contact(contact* pc);

//增加联系人
void add_contact(contact* pc);

//扩容
void add_capacity(contact* pc);

//打印
void show_contact(contact* pc);

//删除
void del_contact(contact* pc);

//查找联系人是否存在
int find_contact(contact* pc, char* str);

//搜索
void srch_contact(contact* pc);

//修改联系人信息
void mdfy_contact(contact* pc);

//排序联系人
void sort_contact(contact* pc);

//排序目录
void sort_menu();

//按姓名排序
void sort_by_name(contact* pc);

//按年龄排序
void sort_by_age(contact* pc);

//排序函数
int cmp_by_name(const void* p1, const void* p2);

int cmp_by_age(const void* p1, const void* p2);

void swap(void* p1, void* p2, int num);

//释放内存
void free_contact(contact* pc);

//保存联系人
void serve_contact(contact* pc);

//加载文件数据
void load_data(contact* pc);
