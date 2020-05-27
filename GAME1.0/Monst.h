#pragma once
//#include"all.h"    Hero.h   内已经包含all.h
#include"Hero.h"
class Hero;
class Monst
{
public:
	int HP;
	string name;
	int Atk;
	int Lev_DM;//恶魔（Demon）的等级
	bool isAive_DM();
	void init(int );
	void atk_eat(Hero& man);//攻击_咬他
private:


};

