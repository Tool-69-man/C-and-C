#include<iostream>
#include<string>
using namespace std;
class Base {
public:
	 void vf() {
	//virtual void vf() {
		cout << "这是Base" << endl;
	}

};
class derived1 :public Base {
public:
	void vf() {
		cout << "这是derived1" << endl;
	}
};
class derived2 :public Base {
public:
	void vf() {
		cout << "这是derived2" << endl;
	}
};
int main() {
	//Base b;
	Base* p = new Base;
	//p = &b;
	p->vf();
	derived1* p1;
	derived1 b1;
	p1 = &b1;
	p1->vf();
	derived2* p2 = new derived2;
	p2->vf();
	Base* p3 = new derived1;
	p3->vf();
	Base* p4 = new derived2;
	p4->vf();
	return 0;
}