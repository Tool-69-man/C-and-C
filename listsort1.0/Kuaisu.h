#pragma once
#include"sort.h"
class Kuaisu:public Sort
{
public:
	int jiao = 0;
	int num = 0;//�Ƚϴ���
	void sortlistUp(int l, int h);
	void sortlistDown();
	void sort();
	int quick1(int l, int h);
};

