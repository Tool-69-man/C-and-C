#pragma once
#include"Hero.h"
#include"Monst.h"
#include"Skills.h"
class Black
{public:
	//创建对象
	Hero man;
	Monst demon;
	int round;
	bool state;
	void init();
int choice();
bool challenge();
	void show(int, Hero, Monst);
	void show(string, Hero, Monst);
};

