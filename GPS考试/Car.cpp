#include "Car.h"

void Car::move(Gps &g)
{
	cout << "��ʼ����gps" << endl;
	g.satelliteMap();
}

Car::Car(string model)
{
	this->model = model;
	cout << "���ڵ�ģʽ��" << model << endl;
}

Car::Car()
{
}

Car::~Car()
{
}
