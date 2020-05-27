#pragma once
#include"stady.h"
class MONST;

class Hero
{
public:
	string name;
	int HP;
	int MP;
	int level;
	char skills[8];
	int num;//使用的技能编号

	void init_hero();//初始化
	void  choice_skill();//攻击怪兽时选择的技能
	void attack(MONST& damon);//攻击
	void isAlive();
	void level_UP();
	void level_down();
	void settledatas(int level);

	Hero(void) {}
	~Hero(void) {}
};

