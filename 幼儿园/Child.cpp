#include "Child.h"

void Child::show()
{
	cout << "====================" << endl;
	cout << "����:" << name << endl;
	cout << "====================" << endl;
	cout << "����:" << age << endl;
	cout << "====================" << endl;
	cout << "�꼶:" << grade << endl;
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