#pragma once
#include"Space.h"
class Yuan :public Space
{
public:
	int a = 3;
	

	void zhou() {
		cout << "周长=" << 2*2*3.14 << endl;
	}
	void mianJi() {
		cout << " 面积=" << 3*3*3.14 << endl;
	}



	Yuan() {
		this->count3 = 1;
		cout << "圆形遍" << count3 << endl;
		cout << "半径" << a << endl;
	}
};
