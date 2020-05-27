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
	//输入最后一个数后   再输入Ctrl+Z 回车 不会乱码 v=0
	cout << "sum"<<sum;
	//输入最后一个数后 先回车再输入Ctrl+Z 会乱码 不正常退出
	return 0;
}