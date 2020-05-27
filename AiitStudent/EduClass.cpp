#include "stdafx.h"
#include "EduClass.h"


// 默认创建班级时，初始容量为10
EduClass::EduClass() :EduClass(10)
{}

EduClass::EduClass(int capacity)
{
	// 默认创建班级时，班级人数为0
	count = 0;

	this->capacity = capacity;
	studentList = new Student[this->capacity];
}


EduClass::~EduClass()
{
}

void EduClass::showAllStudents()
{
	for (int i = 0; i < count; i++)
	{
		studentList[i].show();
	}
}

void EduClass::addStudent()
{
	if (count == capacity)
	{
		/*cout << "班级学生已满，无法再进行添加！" << endl;
		return;*/
		/* 当容量不足时，进行扩容：
		1、原数组已不满足需求，创建一个新的容量更大的数组
		2、把原数组里的内容拷贝到新数组中（这时候有两个地址很重要，原数组地址，新数组地址）
		3、替换studentList指针地址，将成员变量指向新的数组
		*/
		// 创建新数组，里面都是 Student 默认实例
		capacity *= 2;
		Student* newList = new Student[capacity];
		// 将原数组内容拷贝至新数组，studentList指针指向的数组内容 拷贝至 newList指针指向的数组
		memcpy(newList, studentList, count*sizeof(Student));
		// 将原数组占用空间释放
		delete[] studentList;
		// 指针指向新的地址
		studentList = newList;
	}

	cout << "请输入需要添加学生的姓名：" << endl;
	cin >> studentList[count].name;

	cout << "请输入需要添加学生的年龄：" << endl;
	cin >> studentList[count].age;

	cout << "请输入需要添加学生的学号：" << endl;
	cin >> studentList[count].stuNO;

	count++;
}

Student * EduClass::getStudentByName(string name)
{
	for (int i = 0; i < count; i++)
	{
		if (studentList[i].name == name)
		{
			return &studentList[i];
		}
	}
	return nullptr;
}

void EduClass::queryStudentConsole()
{
	cout << "请输入需要查询学生的姓名：" << endl;
	string name;
	cin >> name;
	Student* res = getStudentByName(name);
	if (res)
	{
		cout << "查询到以下信息：" << endl;
		res->show();
	}
	else
	{
		cout << "查无此人！" << endl;
	}
}