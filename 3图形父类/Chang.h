#pragma once
#include"Space.h"
class Chang:public Space
{
public:
	int a = 2;
	int b = 2;

	void zhou() {
		cout << "�ܳ�=" << (a + b) * 2 << endl;
	}
	void mianJi() {
		cout << " ���=" << a * b << endl;
	}



	Chang() {
		this->count3 = 4;
		cout << "�����α�" << count3 << endl;
		cout << "�߳�" << a << endl;
		
	}
};

