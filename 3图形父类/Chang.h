#pragma once
#include"Space.h"
class Chang:public Space
{
public:
	int a = 2;
	int b = 2;

	void zhou() {
		cout << "周长=" << (a + b) * 2 << endl;
	}
	void mianJi() {
		cout << " 面积=" << a * b << endl;
	}



	Chang() {
		this->count3 = 4;
		cout << "正方形遍" << count3 << endl;
		cout << "边长" << a << endl;
		
	}
};

