#include "Hero.h"

void Hero::init_hero()
{
	cout << "请输入你的英雄名" << endl;
	cin >> name;
	HP = 2000;
	MP = 50;
	level = 1;
	string skills_name[num_sk] = { "杀","酒杀","雷杀","火杀","决斗","南蛮入侵","万剑齐发","闪电" };
	int level_can[num_sk] = {1,2,5,10,20,30,40,50};
	int CD[num_sk] = { 0,1,2,3,3,4,4,5 };
	int MPloss[num_sk] = {0,5,10,30,50,70,140,500};
	int damage[num_sk] = {10,12,15,18,20,23,25,30};
	int i = 0;
	for ( i = 0; i !=num_sk; i++)
	{
		sk[i].level_get = level_can[i];
		sk[i].name = skills_name[i];
		sk[i].CD = CD[i];
		sk[i].damage = level * damage[i];
		sk[i].loss_MP = MPloss[i];
		sk[i].use_skill = 0;
	}
	cout << "初始化成功" << endl;
	cout << "===========================" << endl;
	PC;
}

void Hero::choice_sk()
{
	//输入技能选项
	cout << "请选择技能" << endl;
	//显示选项列表
	int i = 0;
	for (i = 0; i != num_sk; i++)
	{
		if (sk[i].level_get <= level) {
			cout << i + 1 << ":" << sk[i].name <<
		   "【" <<(sk[i].use_skill == 0 ? "OK" : "NO") << "】" << endl;
		}
	}

	//输入 do   whlie
	//输入   小于最大技能    要大于0    已经获得的技能
	do{
		int n = -1;
	cin >> n;
	int tn = n - 1;//tn  计算机从0开始   tn=n-1
	if (n <= num_sk&&n>0&&sk[tn].level_get<=level) {
		//如果 还在冷却  提示重选 continue
		if (sk[tn].use_skill) {
			cout << "技能还在冷却."<<endl
				<<"请重新选择" << endl;
			continue;
		}

		//蓝不够不能用
		if (sk[tn].loss_MP>MP)
		{
			cout << "法力值不足，你无法使用此技能" << endl;
			cout << "请重新选择:" << endl;
			continue;
		}
	num_choice = tn;
	return;
	}
}while (true);

}

void Hero::attack(Monst& Demon)//英雄攻击怪兽
{
	Demon.HP -= sk[num_choice].damage;
	MP -= sk[num_choice].loss_MP;
	sk[num_choice].use_skill = sk[num_choice].CD + 1;
}

bool Hero::isAlive()
{
	return HP>0;
}

void Hero::levelup(int up)
{
	cout << "==========恭喜升级========" << endl;
	level += up;
	cout << "当前等级：" << level << endl;
	settledatas(level);
	PC;
}

void Hero::leveldown()
{
	level--;
	cout << "=========失败降级========" << endl
		<< "当前等级:" << level <<endl;
	settledatas(level);
	PC;
}

void Hero::settledatas(int LEVEL)
{
	//HP 每级*500   MP *10
	HP = 2000 + 200 * (LEVEL - 1);
	MP = 50 + 30 * (LEVEL - 1);
	int i = 0;
	int atk[num_sk] = { 10,12,15,18,20,23,25,30 };
	for ( i = 0; i <num_sk; i++)
	{
		sk[i].damage = (LEVEL - 1) * atk[i];
		sk[i].use_skill = 0;
	}
}




