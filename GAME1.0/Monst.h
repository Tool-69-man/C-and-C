#pragma once
//#include"all.h"    Hero.h   ���Ѿ�����all.h
#include"Hero.h"
class Hero;
class Monst
{
public:
	int HP;
	string name;
	int Atk;
	int Lev_DM;//��ħ��Demon���ĵȼ�
	bool isAive_DM();
	void init(int );
	void atk_eat(Hero& man);//����_ҧ��
private:


};

