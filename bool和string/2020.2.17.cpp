#include<iostream>
#include<string>
//#include<string.h>加个后缀也行
using namespace std;
void fun() {
	string name = "lucy";
	int age = 20;
	bool married = false;
	cout << name << endl;
	cout << age << endl;
	if (married) {
		cout << "已婚";
	}
	else {
		cout << "未婚";
	}


}


int fun2(bool flag) {
	if (flag) {
		flag = false;
	}
	else
	{
		flag = true;
	}
	return flag;
}


int main() {
	bool flag = true;
	// fun();
	fun2(flag);
	/* cout << true<<endl;
	 cout << false<<endl;*/
	//true  返回值为  1
	//false 返回值为  0
	cout << flag << endl;//形参传入形参未改变 flag 的值
	fun2(flag);
	cout << flag << endl;
	return 0;
}