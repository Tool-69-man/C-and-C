#pragma once
#include"Hero.h"
#include"Monst.h"
#include<iomanip>
class Background
{
public:
	Hero man;
	Monst demon;
	int round;
	bool state;
	void init_Back();
	int choice_mon();
	bool challenge();
	void show(int, Hero, Monst);
	void show(string, Hero, Monst);
};

