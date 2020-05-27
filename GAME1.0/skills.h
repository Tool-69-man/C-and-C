#pragma once
#include"all.h"
class Skills
{
public:
	string name;
	int level_get;//获得技能需要的等级
	int CD;
	int loss_MP;
	int damage;
	int use_skill;//是否能用 0可以用  
};

