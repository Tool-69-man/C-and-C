#pragma once
#include"allhead.h"
#include"Num.h"

class Sort
{
public:
	//int list[maxnum];
	int count;//¼ÆÊý
	int capacity;//ÈÝÁ¿
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

