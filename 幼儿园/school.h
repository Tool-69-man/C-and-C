#pragma once
#include"Child.h"
class school
{
public:
	Child people[MAX];
	int num;
	int outNum;
	bool add();
	bool destroy();
	Child query();
	bool change();
	void showall();
	school();
	~school();

};

