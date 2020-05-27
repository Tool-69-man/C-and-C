#include "Black.h"

void Black::init()
{
	cout << endl << endl << endl;
	cout << "``````````````````````````" << endl;
	cout << "````````进入游戏``````````" << endl;
	cout << "``````````````````````````" << endl;
	PC;
}

int Black::choice()
{ 
	int n = 0;
	do
	{
		
		cout << "请输入你想要挑战的敌人" << endl;
		cout << "//////////////////////////////" << endl<<endl;
		cout << "1 :" << "    哥布林 【lv  1】" << endl<<endl;
		cout << "===============================" << endl<<endl;
		cout << "2 :" << "    食尸鬼 【lv  5】" << endl << endl;
		cout << "*******************************" << endl << endl;
		cout << "3 :" << "     恶魔  【lv 10】" << endl << endl;
		cout << "+++++++++++++++++++++++++++++++" << endl << endl;
		cout << "4 :" << "     黑龙  【lv 30】" << endl << endl;
		cout << "················" << endl << endl;
		cout << "5 :" << "     魔王  【lv 50】" << endl << endl;
		cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
		cin >> n;
		
	} while (n < 1 || n>5);
	return n - 1;
}

bool Black::challenge()
{
	//while(ture)  循环  循环  循环！！！！！！！！！！！！！！！！
	while (true) {
		//先展示回合信息
		show(round, man, demon);
		//英雄回合：1选择 2攻击 3展示英雄  姓名
		man.choice_sk();
		man.attack(demon);
		show(man.name, man, demon);
		//判断怪兽状态     
		//  1.活着 怪兽攻击  2.死了 再判断是否打死了BOSS   游戏胜利or升级继续 
		//怪兽回合 
		//判断英雄状态 1.死了 降级  再判断是否   再起不能gg  2.活着继续   减CD
		if (demon.Alive()) {
			demon.attack(man);
			show(demon.name, man, demon);
			if (!man.Alive())
			{
				man.leveldown();
				if (man.level <= 0) {
					cout << "=========游戏失败==========" << endl;
					PA;
					return false;
				}
				return true;
			}
			else
			{
				round++;
				int i = 0;
				for (i = 0; i < MAX_NUM; i++)
				{
					man.sk[i].action = (man.sk[i].action == 0 ? 0 : man.sk[i].action - 1);
				}
				PC;
				continue;
			}
		}
		else
		{
			if (demon.level == 50) {
				cout << "========恭喜通过=========" << endl;
				PA;
				return false;
			}
			man.levelup(demon.level);
			return true;
		}
	}
}

void Black::show(int round, Hero man, Monst demon)//展现第几回合
{//英雄 怪兽 姓名，HP，MP，等级
	CLS;
	cout << endl << endl << endl;
	cout<< "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
	cout << "第" << round + 1 << "轮!" << endl;
	cout << "||||||||||||||||||||||||||||||||||" << endl;
	cout << "英雄：" << man.name 
		<< "		" 
		<< "level:" << man.level << endl
		<< "=====================================" << endl
		<< "HP:" << man.HP 
		<< "			" 
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "敌人:" << demon.name 
		<< "		" 
		<< "level:" << demon.level << endl
		<< "=====================================" << endl
		<< "HP:" << demon.HP << endl
		<< ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	PC;
}

void Black::show(string name, Hero man, Monst demom)
{

	//谁发动攻击   随后展现英雄 怪兽 姓名，HP，MP，等级
	cout << endl << endl << endl;
	cout << name << "发动攻击" << endl
		<< "=====================================" << endl;
	cout << "英雄：" << man.name 
		<< "			" 
		<< "level:" << man.level << endl
		<< "=====================================" << endl
		<< "HP:" << man.HP 
		<< "			" 
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "敌人:" << demon.name 
		<< "			" 
		<< "level:" << demon.level<< endl
		<< "=====================================" << endl
		<< "HP:" << demon.HP << endl
		<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
	
}
