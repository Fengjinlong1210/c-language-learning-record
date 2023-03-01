#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct BTNode
{
	char val;
	struct BTNode* left;
	struct BTNode* right;
}BTNode;

BTNode* CreateTree(char* str, int* i);