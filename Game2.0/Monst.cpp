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
{//创建怪兽名，等级   再通过选择传出名字和等级   
//HP，Atk  与等级有关
	string name_S[5] = { "哥布林","食尸鬼","恶魔","黑龙","魔王" };
	int lev_S[5] = {1,5,10,30,50};
	name = name_S[op];
	level = lev_S[op];
	HP = 100 * level;
	Atk = 10 * level;
}
