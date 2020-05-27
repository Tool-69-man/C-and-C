// AiitStudent.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Student.h"
#include "EduClass.h"
#include "SysSecurity.h"

// ���˵�
void mainMenu();

// ϵͳ��¼����
void login();

int main()
{
	cout << "��ӭʹ��xxxxxxxxϵͳ" << endl;

	login();

	return 0;
}


void mainMenu() {
	EduClass myClass;
	bool loop = true;

	while (loop)
	{
		cout << "-------------------------" << endl;
		cout << "��ѡ�������" << endl;
		cout << "1���鿴����ѧ��" << endl;
		cout << "2�����ѧ��" << endl;
		cout << "3����ѯ��Ϣ" << endl;
		cout << "4������ѧ����Ϣ" << endl;
		cout << "5���Ƴ�ѧ����Ϣ" << endl;
		cout << "0��������һ��" << endl;
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
		cout << "1����¼" << endl;
		cout << "2��ע��" << endl;
		cout << "0���˳�" << endl;
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
				cout << "�û�����������������µ�¼��" << endl;
			}
			break;
		case 2:
			// todo ע����ôʵ�֣�����
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