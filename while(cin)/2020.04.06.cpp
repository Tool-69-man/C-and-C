#include<iostream>
#include<string>
using namespace std;
int main() {
	int sum(0), v(0);
	while (cin>>v)
	{
		sum += v;
	}
	cout << "v" << v << endl;
	//�������һ������   ������Ctrl+Z �س� �������� v=0
	cout << "sum"<<sum;
	//�������һ������ �Ȼس�������Ctrl+Z ������ �������˳�
	return 0;
}