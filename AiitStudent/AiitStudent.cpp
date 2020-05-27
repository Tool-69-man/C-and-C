// AiitStudent.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Student.h"
#include "EduClass.h"

int main()
{
	EduClass myClass;
	bool loop = true;

	cout << "欢迎使用xxxxxxxx系统" << endl;

	myClass.studentList[0].name = "jack";
	myClass.studentList[0].stuNO = "s11";
	myClass.studentList[0].age = 11;
	myClass.studentList[1].name = "lucy";
	myClass.studentList[1].stuNO = "s22";
	myClass.studentList[1].age = 22;
	myClass.count = 2;

	while (loop)
	{
		cout << "-------------------------" << endl;
		cout << "请选择操作：" << endl;
		cout << "1、查看所有学生" << endl;
		cout << "2、添加学生" << endl;
		cout << "3、查询信息" << endl;
		cout << "0、退出" << endl;
		int input;
		cin >> input;
		switch (input)
		{
		case 1:
			myClass.showAllStudents();
			break;
		case 2:
			myClass.addStudent();
			break;
		case 3:
			myClass.queryStudentConsole();
			break;
		case 0:
			loop = false;
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}


	return 0;
}

