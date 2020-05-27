#include "Child.h"

void Child::show()
{
	cout << "====================" << endl;
	cout << "名字:" << name << endl;
	cout << "====================" << endl;
	cout << "年龄:" << age << endl;
	cout << "====================" << endl;
	cout << "年级:" << grade << endl;
	cout << "====================" << endl;
}

Child::Child()
{
}

Child::Child(string name, int age, string grade)
{
	this->name = name;
	this->age = age;
	this->grade = grade;
}

Child::~Child()
{
}