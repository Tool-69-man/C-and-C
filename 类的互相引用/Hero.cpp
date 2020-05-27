#include "Hero.h"
#include"stady.h"
#include"skills.h"

//初始化 HP MP level name
void Hero::init_hero() {

	cout << "上帝:"
		<< " ... " << endl 
		<<"——————"<<endl
		<< "进入幻想世界中...." << endl
		<< "你的名字：" << endl;
	cin >> name;
	system("cls");
	
     HP = 100;
	Hero::MP = 100;
	Hero::level = 0;
	cout << "上帝:";
	cout << name << ",活下去"<<endl
		<<"————————————"<<endl;

	system("pause");
	system("cls");
	cout << "---------------------" << endl;
	cout << "赐予生命：" << HP <<"  HP" <<endl;
	cout << "获得魔法：" << MP << "  MP"<<endl;
	cout << "魂魄等级：" << level << "  LEVEL" << endl;
	cout << "---------------------" << endl;
	system("pause");
	system("cls");
};

//选技能
void Hero::choice_skill() {
	int M;
	cin >> M;
	
};