#pragma once
#include "Student.h"

// ��ѧ�༶
class EduClass
{
public:
	EduClass();
	EduClass(int capacity);
	~EduClass();

	// 10����������ʾ�༶���10����
	//Student students[2000];//�ռ����������ȹ̶�

	// ��������ָ�����ԭ������ķ�ʽ�����ⳤ�ȹ̶���
	Student* studentList;
	// �����༶��ǰ�ж�����
	int count;
	// ��������
	int capacity;

	void showAllStudents();
	void addStudent();
	Student* getStudentByName(string name);
	Student* getStudentByStuNO(string stuNO);
	// ����ѧ����Ϣ��ѯѧ����������λ�ã�ƥ�䲻��ʱ������ -1 
	int getStudentIndex(string stuNO);
	void queryStudentConsole();
	void showStudentUpdate();
	void removeStudent();
};

