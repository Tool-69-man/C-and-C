#pragma once
#include"ALL.h"
#include"Person.h"
#include "Hero.h"
class Hero;
class Monst:public Person 
{
public:
	int Atk;
	//bool Alive() ;
	int attack(Hero &);
	void init(int);
};

