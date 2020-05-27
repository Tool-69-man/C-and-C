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
	cout << "姓名" << _name << endl;
	cout << "年龄" << _age<< endl;
}

header::header()
{
	cout << "那么开始吧" << endl;
}
header::~header()
{
}