#include "stdafx.h"
#include "Student.h"


Student::Student()
{
	// 创建学生时，默认给定年龄为0
	age = 0;
	name = "我是一名学生";
}


Student::~Student()
{
}

void Student::show()
{
	cout << "--------------------" << endl;
	cout << "姓名：" << name << endl;
	cout << "学号：" << stuNO << endl;
	cout << "年龄：" << age << endl;

}