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
	int num;//ʹ�õļ��ܱ��

	void init_hero();//��ʼ��
	void  choice_skill();//��������ʱѡ��ļ���
	void attack(MONST& damon);//����
	void isAlive();
	void level_UP();
	void level_down();
	void settledatas(int level);

	Hero(void) {}
	~Hero(void) {}
};

