#include "header.h"
#include"day.h"

header::header(string n, int age)
{
	this->_name = n;
	this->_age = age;
}

header::header(string n)
{
	this->_name = n;
}

string header::getname()
{
	return _name;
}

void header::setif()
{
	cout << "����" << _name << endl;
	cout << "����" << _age<< endl;
}

header::header()
{
	cout << "��ô��ʼ��" << endl;
}
header::~header()
{
}