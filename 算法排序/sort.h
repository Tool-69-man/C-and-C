#pragma once
#include"head.h"
#include"Num.h"
#include"MaoPao.h"
class Sort
{
public:
	//int list[maxnum];
	int count;//����
	int capacity;//����
	Num* listnum;
	int isfalse();
	void show();
	void scanfList();
	void goSort();
	//void goSort(Sort &s1);
	void add();
	void sortlistUp();
	
	Sort(int s);
	Sort();
};

