#pragma once
#include"Gps.h"
#include"��ͷ.h"
class Gps;
class Car
{
private:
	string model;
public:
	void move(Gps &g);
	Car(string model);
	Car();
	~Car();
};

