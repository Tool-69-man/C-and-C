// AiitStudent.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Student.h"
#include "EduClass.h"

int main()
{
	EduClass myClass;
	bool loop = true;

	cout << "��ӭʹ��xxxxxxxxϵͳ" << endl;

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
		cout << "��ѡ�������" << endl;
		cout << "1���鿴����ѧ��" << endl;
		cout << "2�����ѧ��" << endl;
		cout << "3����ѯ��Ϣ" << endl;
		cout << "0���˳�" << endl;
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

