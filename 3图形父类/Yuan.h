#pragma once
#include"Space.h"
class Yuan :public Space
{
public:
	int a = 3;
	

	void zhou() {
		cout << "�ܳ�=" << 2*2*3.14 << endl;
	}
	void mianJi() {
		cout << " ���=" << 3*3*3.14 << endl;
	}



	Yuan() {
		this->count3 = 1;
		cout << "Բ�α�" << count3 << endl;
		cout << "�뾶" << a << endl;
	}
};
