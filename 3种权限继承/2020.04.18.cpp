#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	string pubname="无聊";
	A() {};
	~A() {};
protected:
	string proname = "该死";
private:
	string priname = "无能";
};
class B :public A
{
public:
	B() {	
		pubname = "呵呵";
		proname = "为什么这么负面";
		//priname = "失去了动力";//priname 已经继承 但无法访问
	}
};
class C :protected B 
{
public:
	C() {
		pubname = "到底怎么解决我的失望";//pubname 已经变成保护权限 类外无法调用
		proname = "我之前的动力，从哪里来的";
		//priname = "我曾经注入了希望";//
	}
};

//公共 的元素   保护继承后   变成保护权限
//私有<-保护<-公有  权限低到权限高 转变

int main() {
	A s1;
	cout << s1.pubname << endl;
	B s2;
	cout << s2.pubname << endl;
	C s3;
	//s3.pubname="不只是这样，我曾经充满了兴趣";已经变成保护权限
	return 0;
}