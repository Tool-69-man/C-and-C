#pragma once
#include"allhead.h"
#include"Num.h"

class Sort
{
public:
	//int list[maxnum];				//�̶�������
	int count;						//����
	int capacity;					//����
	Num* listnum;					//ָ�����ݶ���
	int isfalse();					//�д�
	void show();					//չʾ
	void scanfList();				//����
	virtual void goSort(Sort a1);	//6�� �����̬
	//void goSort(Sort &s1);
	void add();						//����

	Sort(int s);
	Sort();
};

