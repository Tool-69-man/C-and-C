#include "stdafx.h"
#include "EduClass.h"


// Ĭ�ϴ����༶ʱ����ʼ����Ϊ10
EduClass::EduClass() :EduClass(10)
{}

EduClass::EduClass(int capacity)
{
	// Ĭ�ϴ����༶ʱ���༶����Ϊ0
	count = 0;

	this->capacity = capacity;
	studentList = new Student[this->capacity];

	//  ���Ӳ�������
	studentList[0].name = "jack";
	studentList[0].stuNO = "s11";
	studentList[0].age = 11;
	studentList[1].name = "lucy";
	studentList[1].stuNO = "s22";
	studentList[1].age = 22;
	count = 2;
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
		/*cout << "�༶ѧ���������޷��ٽ�����ӣ�" << endl;
		return;*/
		/* ����������ʱ���������ݣ�
		1��ԭ�����Ѳ��������󣬴���һ���µ��������������
		2����ԭ����������ݿ������������У���ʱ����������ַ����Ҫ��ԭ�����ַ���������ַ��
		3���滻studentListָ���ַ������Ա����ָ���µ�����
		*/
		// ���������飬���涼�� Student Ĭ��ʵ��
		capacity *= 2;
		Student* newList = new Student[capacity];
		// ��ԭ�������ݿ����������飬studentListָ��ָ����������� ������ newListָ��ָ�������
		memcpy(newList, studentList, count*sizeof(Student));
		// ��ԭ����ռ�ÿռ��ͷ�
		delete[] studentList;
		// ָ��ָ���µĵ�ַ
		studentList = newList;
	}

	cout << "��������Ҫ���ѧ����������" << endl;
	cin >> studentList[count].name;

	cout << "��������Ҫ���ѧ�������䣺" << endl;
	cin >> studentList[count].age;

	cout << "��������Ҫ���ѧ����ѧ�ţ�" << endl;
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
	cout << "��������Ҫ��ѯѧ����������" << endl;
	string name;
	cin >> name;
	Student* res = getStudentByName(name);
	if (res)
	{
		cout << "��ѯ��������Ϣ��" << endl;
		res->show();
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
}

Student * EduClass::getStudentByStuNO(string stuNO)
{
	for (int i = 0; i < count; i++)
	{
		if (studentList[i].stuNO == stuNO)
		{
			return &studentList[i];
		}
	}
	return nullptr;
}

void EduClass::showStudentUpdate()
{
	showAllStudents();
	cout << "��������Ҫ����ѧ����ѧ�ţ�" << endl;
	string input;
	cin >> input;

	Student* res = getStudentByStuNO(input);
	if (res)
	{
		cout << "��������µ�������" << endl;
		cin >> res->name;

		cout << "��������µ����䣺" << endl;
		cin >> res->age;

		showAllStudents();
	}
	else
	{
		cout << "δ�ҵ���ѧ�ŵ�ѧ����Ϣ�������������룡" << endl;
	}
}

void EduClass::removeStudent()
{
	showAllStudents();
	cout << "��������Ҫ�Ƴ�ѧ����ѧ�ţ�" << endl;
	string input;
	cin >> input;
	int index = getStudentIndex(input);
	if (index > -1)
	{
		// �Ƴ��Ĳ��������������һ��Ԫ��
		if (index + 1 < count)
		{
			while (index + 1 < count)
			{
				studentList[index] = studentList[index + 1];
				index++;
			}
		}
		count--;
		showAllStudents();
	}
	else
	{
		cout << "δ�ҵ���ѧ�ŵ�ѧ����Ϣ�������������룡" << endl;
	}
}

int EduClass::getStudentIndex(string stuNO)
{
	for (int i = 0; i < count; i++)
	{
		if (studentList[i].stuNO == stuNO)
		{
			return i;
		}
	}
	return -1;
}