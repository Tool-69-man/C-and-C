#include "stdafx.h"
#include "Student.h"


Student::Student()
{
	// ����ѧ��ʱ��Ĭ�ϸ�������Ϊ0
	age = 0;
	name = "����һ��ѧ��";
}


Student::~Student()
{
}

void Student::show()
{
	cout << "--------------------" << endl;
	cout << "������" << name << endl;
	cout << "ѧ�ţ�" << stuNO << endl;
	cout << "���䣺" << age << endl;

}