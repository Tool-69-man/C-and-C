#pragma once
#include"Space.h"
class Juxin:public Space
{
	
public:
	int a = 3;
	int b = 2;
	void zhou() {
		cout << "�ܳ�=" << (a + b) * 2 << endl;
	}
	void mianJi() {
		cout <<" ���=" << a*b << endl;
	}



	Juxin() {
		this->count3 = 4;
		cout << "���α�" << count3 << endl;
		cout << "��" << a << endl;
		cout << "��" << a << endl;
	}

};

