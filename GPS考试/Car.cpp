#include "Car.h"

void Car::move(Gps &g)
{
	cout << "开始运行gps" << endl;
	g.satelliteMap();
}

Car::Car(string model)
{
	this->model = model;
	cout << "现在的模式是" << model << endl;
}

Car::Car()
{
}

Car::~Car()
{
}
