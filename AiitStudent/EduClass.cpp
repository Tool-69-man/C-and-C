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