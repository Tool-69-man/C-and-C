#include "Monst.h"

bool Monst::isAive_DM()
{
	return HP>0;
}

void Monst::init(int optional)
{
	string name_s[5] = {"��������","��ħ","��ʹ","ħ��","�ϵ�"};
	int level_s[5] = { 1,5,10,30,50 };
	name = name_s[optional];
	Lev_DM = level_s[optional];
	Atk = 100*Lev_DM;
	HP = 20 * Lev_DM;
}

void Monst::atk_eat(Hero& man)
{
	man.HP -= Atk;
}

