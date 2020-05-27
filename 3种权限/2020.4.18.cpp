#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	int pubnum = 0;
	A() {};
	~A() {};

protected:
	int pronum = 2;
private:
	int prinum = 3;
};
class B:public A {
public:


	B() {
		cout <<"公共的" <<pubnum << endl;
		cout <<"保护的" <<pronum << endl;//子类可以用父类 公共和保护
		//cout <<"私有的" <<prinum << endl;不能用私有
	}


};


int main() {
	A s;
	s.pubnum = 10;
	//s.pronum = 12;保护和私有类外不能不可访问
	//s.prinum = 12;
	B s1;
	return 0;
}