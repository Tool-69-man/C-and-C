// AiitStudent.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Student.h"
#include "EduClass.h"
#include "SysSecurity.h"

// 主菜单
void mainMenu();

// 系统登录操作
void login();

int main()
{
	cout << "欢迎使用xxxxxxxx系统" << endl;

	login();

	return 0;
}


void mainMenu() {
	EduClass myClass;
	bool loop = true;

	while (loop)
	{
		cout << "-------------------------" << endl;
		cout << "请选择操作：" << endl;
		cout << "1、查看所有学生" << endl;
		cout << "2、添加学生" << endl;
		cout << "3、查询信息" << endl;
		cout << "4、更新学生信息" << endl;
		cout << "5、移除学生信息" << endl;
		cout << "0、返回上一级" << endl;
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
		case 4:
			myClass.showStudentUpdate();
			break;
		case 5:
			myClass.removeStudent();
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
}

void login() {
	SysSecurity ss;
	bool loop = true;

	while (loop)
	{
		cout << "----------------------------" << endl;
		cout << "1、登录" << endl;
		cout << "2、注册" << endl;
		cout << "0、退出" << endl;
		int input;
		cin >> input;
		switch (input)
		{
		case 1:
			if (ss.showLogin())
			{
				mainMenu();
			}
			else
			{
				cout << "用户名或密码错误，请重新登录！" << endl;
			}
			break;
		case 2:
			// todo 注册怎么实现？？？
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
}