#include "Monst.h"




/*bool Monst::Alive()
{
	return HP>0;
}
*/
int Monst::attack(Hero&man)
{
	return man.HP -= Atk;
}

void Monst::init(int op)
{//�������������ȼ�   ��ͨ��ѡ�񴫳����ֺ͵ȼ�   
//HP��Atk  ��ȼ��й�
	string name_S[5] = { "�粼��","ʳʬ��","��ħ","����","ħ��" };
	int lev_S[5] = {1,5,10,30,50};
	name = name_S[op];
	level = lev_S[op];
	HP = 100 * level;
	Atk = 10 * level;
}
