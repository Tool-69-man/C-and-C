#pragma once
#include"all.h"
#include "skills.h"
#include "Monst.h"
class Monst;
class Hero
{
public:
	string name;
	int HP;
	int MP;
	Skills sk[num_sk];//技能定义数组
	int level;
	void init_hero() ;
	void choice_sk() ;
	void attack(Monst& Demon);
	bool isAlive();
	void levelup(int );
	void leveldown();
private:
	int num_choice;
	void settledatas(int);
};

