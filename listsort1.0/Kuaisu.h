#pragma once
#include"sort.h"
class Kuaisu:public Sort
{
public:
	int jiao = 0;
	int numBj = 0;//比较次数
	void sortlistUp(int l, int h);
	void sortlistDown();
	void sort();
	int quick1(int l, int h);
	//void quick1(int l, int h);
};

