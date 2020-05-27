#pragma once
#include"Skills.h"
#include "Person.h"
#include "Monst.h"
class Monst;
class Hero :
	public Person
{
public:
	int MP;
	Skills sk[MAX_NUM];
	void attack(Monst&);
	void init();
	//bool Alive();
	void levelup(int);
	void leveldown();
	void choice_sk();
private:
	int num;//选择的技能
	void settedatas(int level);//进化后状态重置
};

