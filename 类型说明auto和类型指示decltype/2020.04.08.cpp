#include<iostream>
#include<string>
using namespace std;
int main() {
	int a = 10;
	const double& b = 10.1;
	const char c = 'h';
	const int* o = nullptr;
	const double& k = a;
	auto i = 2 * a;//int
	auto j = 2 * b;//j����doble
	j = a;
	auto u = o;//u��const int *

	auto ll = k;//  ��int   �Զ�Ϊ��Ӧ�õ�����
	//cout << i << endl << j << endl <<o<<endl;
	////cout << *o << endl;
	//cout << k << endl << u << endl << ll << endl;
	decltype(b) x=12.123;
	decltype(k) y=12.12;
	cout << x << endl;
	cout << y<< endl;
	return 0;
}