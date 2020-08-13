#pragma once
#include"allhead.h"
#include"Num.h"

class Sort
{
public:
	//int list[maxnum];				//固定的数组
	int count;						//计数
	int capacity;					//容量
	Num* listnum;					//指向数据对象
	int isfalse();					//判错？
	void show();					//展示
	void scanfList();				//输入
	virtual void goSort(Sort a1);	//6号 答题多态
	//void goSort(Sort &s1);
	void add();						//扩容

	Sort(int s);
	Sort();
};

