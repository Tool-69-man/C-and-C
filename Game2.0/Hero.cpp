#include "Hero.h"

void Hero::attack(Monst& demon)
{//打出伤害
	demon.HP -= sk[num].damage;
	//计算耗蓝
	MP -= sk[num].MP;
	//可执行action + CD +1
	sk[num].action += sk[num].CD + 1;
}

void Hero::init()
{
	//输入英雄名 个人属性初始化
	printf("周建龙，拯救世界吧！\n");
	cout << "》》》》》》  传送  》》》》》》》》》"<<endl;
	cout << "》》》》》》    活下去，二货..."<<endl;
	cout << "【请输入你的游戏名字】" << endl;
	cin >> name;
	HP = 2000;
	MP = 50;
	level = 1;
	//技能属性 定义数组 各项初始化   for传回
	string sk_Na[MAX_NUM] = { "普通攻击：骂你SB","嘲讽：nm真不吊照","搞人心态：我不玩了，投了，点了","魔音回旋：放1000遍音乐，吐了","热矿泉水：大热天喝热矿泉水","放飞自我：手舞足蹈","神经吼叫：对某校学生大面积产生阴影","恐怖打击：（吟唱：熊义路有鬼）顺势打出真实伤害" };
	int sk_lev[MAX_NUM] = {1,2,5,15,20,30,40,100};
	int sk_cd[MAX_NUM] = { 0,1,2,3,4,5,6,7 };
	int sk_da[MAX_NUM] = { 10,12,15,20,30,40,50,999 };
	int sk_mp[MAX_NUM] = {0,10,40,80,100,150,200,1000};
	for (int  i = 0; i < MAX_NUM; i++)
	{
		sk[i].name = sk_Na[i];
		sk[i].action = 0;
		sk[i].MP= sk_mp[i];
		sk[i].CD = sk_cd[i];
		sk[i].get = sk_lev[i];
		sk[i].damage = sk_da[i] * level;
	}
	cout << "开始战斗" << endl;
	PC;
}

//bool Hero::Alive()
//{
//	return HP>0;
//}

void Hero::levelup(int up)//注意来给用户提示
{//升的级数 为打败怪兽的等级
	level+=up;
	CLS;
	cout << "========升级，进化=========" << endl;
	cout << "********************" << endl;
	cout << "等级：" << level << endl;
	cout << "====================" << endl;
	cout << "HP:" << HP << endl;
	cout << "====================" << endl;
	cout << "MP:" << MP << endl;
	cout << "********************" << endl;
	PC;
	//状态结算 
	settedatas(level);
}

void Hero::leveldown()
{
	CLS;
	cout << "&&&&&&&&  失败，退化一级   &&&&&&&&&" << endl;
	//等级减少1级
	level--;
	cout << "Level:" << level << endl;
	settedatas(level);
	PC;
}

void Hero::choice_sk()
{cout<<"【请输入你选择的技能】"<<endl;
int n;
	
//展现列表  遍历 冷却结果  如果没获得不展示
	for (int i = 0; i < MAX_NUM; i++)
	{
		if (sk[i].get<=level)
		{
			cout << i + 1 << ":" << sk[i].name 
				<< "【" << (sk[i].action == 0 ? "OK":"×" ) << "】" << endl;
		}

	}

	//选择 判断是否  <0   >max  是否已经获得
	//判断是否  蓝够不够   CD好了没 
	do
	{
		cin >> n;
		int tn = n - 1;
		if (tn>0 && tn<MAX_NUM && sk[tn].get >level) {
			cout << "输错了，重搞" << endl;
			continue;
			}
			if (MP < sk[tn].MP) {
				cout << "你也熊吧，法力值不足，没蓝打个p" << endl;
				continue;
			}
			if (sk[tn].action != 0) {
				cout << "技能未冷却好,重新输入" << endl;
				continue;
			}
			num = tn;
			return;
	
	} while (true);
}

void Hero::settedatas(int level)
{
	HP = (level-1) * 100+2000;
	MP = (level-1) * 10+50;
//重置 CD     所有技能随着进化而升级
	int atk[MAX_NUM] = { 10,12,15,18,20,23,25,30 };
	for (int i = 0; i < MAX_NUM; i++)
	{
		sk[i].damage *= atk[i] * (level-1);
		sk[i].action = 0;
	}
}
