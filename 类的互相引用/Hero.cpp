#include "Hero.h"
#include"stady.h"
#include"skills.h"

//��ʼ�� HP MP level name
void Hero::init_hero() {

	cout << "�ϵ�:"
		<< " ... " << endl 
		<<"������������"<<endl
		<< "�������������...." << endl
		<< "������֣�" << endl;
	cin >> name;
	system("cls");
	
     HP = 100;
	Hero::MP = 100;
	Hero::level = 0;
	cout << "�ϵ�:";
	cout << name << ",����ȥ"<<endl
		<<"������������������������"<<endl;

	system("pause");
	system("cls");
	cout << "---------------------" << endl;
	cout << "����������" << HP <<"  HP" <<endl;
	cout << "���ħ����" << MP << "  MP"<<endl;
	cout << "���ǵȼ���" << level << "  LEVEL" << endl;
	cout << "---------------------" << endl;
	system("pause");
	system("cls");
};

//ѡ����
void Hero::choice_skill() {
	int M;
	cin >> M;
	
};