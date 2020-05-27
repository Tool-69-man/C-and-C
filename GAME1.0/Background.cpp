#include "Background.h"
#include<iomanip>

void Background::init_Back()
{
	cout << "============================" << endl;
	cout << "==========开始游戏==========" << endl;
	cout << "============================" << endl;
	PC;
}

int Background::choice_mon()
{
	int n=0;
	do
	{
		
		CLS;
		cout << right << "请选择你的敌人" << endl;//‘’
		cout << setfill('-') << setw(30)<<""<<endl;//填充边框  #include<iomanip> 为什么 ""
		cout << "| 1:" << setfill(' ') << setw(7) <<""<< "魑魅魍魉 【lv  1】|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) <<""<< "  恶魔   【lv  5】|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) <<""<< "  天使   【lv 10】|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) << ""<<"  魔王   【lv 30】|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) << ""<<"  上帝   【lv 50】|" << endl;
		cout << setfill('-') << setw(30)<<""<< endl;


		/*cout << "1 :" << "魑魅魍魉 【lv  1】" << endl;
		cout << "2 :" << "  恶魔   【lv  5】" << endl;
		cout << "3 :" << "  天使   【lv 10】" << endl;
		cout << "4 :" << "  魔王   【lv 30】" << endl;
		cout << "5 :" << "  上帝   【lv 50】" << endl;*/
		
		cin >> n;
	} while (n<1||n>5);

	return --n;
}

bool Background::challenge()
{
	//while(ture)  循环  循环  循环！！！！！！！！！！！！！！！！
	while(true){
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
		if (demon.isAive_DM()) {
			demon.atk_eat(man);
			show(demon.name,man,demon);
			if (!man.isAlive())
			{
				man.leveldown();
				if (man.level <= 0) {
					cout << "=========游戏失败==========" << endl;
					return false;
				}
				return true;
			}
			else
			{
				round++;
				int i = 0;
				for ( i = 0; i < num_sk; i++)
				{
					man.sk[i].use_skill = (man.sk[i].use_skill == 0 ? 0 : man.sk[i].use_skill - 1);
				}
				PC;
				continue;
			}
        }
		else
		{
			if (demon.Lev_DM == 50) {
				cout << "========恭喜通过=========" << endl;
				return false;
			}
				man.levelup(demon.Lev_DM);
				return true;
		}
	}
}

void Background::show(int round, Hero man, Monst demon)//展现第几回合
{//英雄 怪兽 姓名，HP，MP，等级
	cout << "这是第" << round+1 << "轮!" << endl;
	cout << "英雄：" << man.name << endl
		<< "level:" << man.level << endl
		<< "HP:" << man.HP << endl
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "敌人:" << demon.name << endl
		<< "level:" << demon.Lev_DM << endl
		<< "HP:" << demon.HP << endl
		<< "=====================================" << endl;
	PA;
}

void Background::show(string name, Hero man, Monst demom)
{
	//谁发动攻击   随后展现英雄 怪兽 姓名，HP，MP，等级
	cout <<  name << "发动攻击" << endl;
	cout <<  name << "=====================================" << endl;
	cout << "英雄：" << man.name << endl
		<< "level:" << man.level << endl
		<< "HP:" << man.HP << endl
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "敌人:" << demon.name << endl
		<< "level:" << demon.Lev_DM << endl
		<< "HP:" << demon.HP << endl
		<< "=====================================" << endl;
	PC;
}
