#pragma once
#include"Space.h"
class Juxin:public Space
{
	
public:
	int a = 3;
	int b = 2;
	void zhou() {
		cout << "周长=" << (a + b) * 2 << endl;
	}
	void mianJi() {
		cout <<" 面积=" << a*b << endl;
	}



	Juxin() {
		this->count3 = 4;
		cout << "矩形遍" << count3 << endl;
		cout << "长" << a << endl;
		cout << "宽" << a << endl;
	}

};

