#include<iostream>
#include<string>

using namespace std;

class MyClass 
{
public:
	string anime = "未显示";
	string master = "未显示";
	int NUM=0;
	
//知道番名和男主	
	MyClass(string ,string );//在类外定义
//知道番名和集数	
	MyClass(string a, int n) {
		anime = a;
		NUM = n;
	};
//只知道番名
	MyClass(string  a) {

		anime = a;
		master = "匿名";
	};
//只知道男主与   只知道番名重复
	//MyClass(string m) {
	//	master = m;
	//};

	//只知道集数
	MyClass(int m) {
	NUM = m;
	};
	void  all() {
		cout << "动漫" << anime << endl;
		cout << "主角" << master << endl;
		cout << "集数" << NUM << endl;
		cout << "============================" << endl;
	}
	MyClass() {
		cout << "动漫列表" << endl;
		MyClass::anime = " ";
		MyClass::master = " ";
		MyClass::NUM = 0;
		cout << "***************" << endl;
	}
	~MyClass();
	
private:

};

//MyClass::MyClass() {
//	cout << "动漫列表" << endl;
//	MyClass::anime = " ";
//	MyClass::master = " ";
//	MyClass::NUM= 0;
//	cout << "***************" << endl;
//}
MyClass::MyClass(string name,string man)
{
	MyClass::anime = name;
	MyClass::master = man;
	
}

MyClass::~MyClass()
{
}

int main() {
	MyClass s;//栈对象  实现构造函数
	s.all();
	MyClass s1("约会大作站","五河士道");
	s1.all();
	MyClass* p1 = new MyClass("缘之空",24);//堆对象
	p1->all();
	MyClass s2("妖精尾巴");
	s2.all();
	MyClass s3(1000);
	s2.all();

	return 0;
}