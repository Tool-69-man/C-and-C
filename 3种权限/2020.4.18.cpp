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
		cout <<"������" <<pubnum << endl;
		cout <<"������" <<pronum << endl;//��������ø��� �����ͱ���
		//cout <<"˽�е�" <<prinum << endl;������˽��
	}


};


int main() {
	A s;
	s.pubnum = 10;
	//s.pronum = 12;������˽�����ⲻ�ܲ��ɷ���
	//s.prinum = 12;
	B s1;
	return 0;
}