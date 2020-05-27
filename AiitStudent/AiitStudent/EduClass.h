#pragma once
#include "Student.h"

// 教学班级
class EduClass
{
public:
	EduClass();
	EduClass(int capacity);
	~EduClass();

	// 10个容量，表示班级最多10个人
	//Student students[2000];//空间连续，长度固定

	// 采用数组指针代替原先数组的方式，避免长度固定死
	Student* studentList;
	// 描述班级当前有多少人
	int count;
	// 数组容量
	int capacity;

	void showAllStudents();
	void addStudent();
	Student* getStudentByName(string name);
	Student* getStudentByStuNO(string stuNO);
	// 根据学号信息查询学生所在索引位置，匹配不到时，返回 -1 
	int getStudentIndex(string stuNO);
	void queryStudentConsole();
	void showStudentUpdate();
	void removeStudent();
};

