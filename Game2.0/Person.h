#pragma once
#include"ALL.h"
class Person
{
public:
	string name;
	int HP;
	int level;
	

	bool Alive() { return HP > 0; };


};

