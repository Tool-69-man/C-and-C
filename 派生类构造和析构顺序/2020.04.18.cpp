#include<iostream>
#include<string>
using namespace std;

class A {
public:
	
	A(string str):A() {
		cout << str << endl; //B中传参过来
		cout << "那么我又写出什么令人兴奋的创造了吗" << endl;//有参数，重载
	}

	A() {
		cout << "但我没有失去兴趣" << endl;
		cout << "我应该去创作,这不应该只是说说而已"<<endl<<
			"没有办法创造，是我的项目看少了，模仿少了，"<<endl
			<<"知道原理写不出来，是我的知识少了"<<endl
			<<"一开始，就不想去做，就放弃，觉得自己做不到，那只是自卑，懒惰"<<endl
			<<"放弃那些无聊的	面子与嫉妒"<<endl;
	}//默认构造
	~A()
	{
		cout << "可是这些知识也只是知道而已，我什么都没做出来"<<endl;
		cout << "我失去了目标，我失去灵魂的指导";
	}
};
class B :public A {
public:
	B():B("为了创造出令人新奇的东西") {//默认函数调用自己的构造函数
		cout << "为了那些激动，我才去掌握基础，" << endl;
	}
	B(string str):A("学了html,css,fiddler,github之后"){//重载
		cout << "我变得迷茫，随着知识增加"<<endl;
		cout << str<<endl;//str 传入
	}//传入A()默认构造函数
	~B()
	{
		cout << "我并不精通，但是也不是一无所知"<<endl;
		cout << "不就是想做出令我激动，欣喜的作品吗" << endl;
	}
};

class C :public B {
public :
	C(){
		cout << "我随着老师机械的练习" << endl;
	}
	~C()
	{
		cout << "贪婪的去了解新鲜的知识" << endl;
	}
};

int main() {
	//B s1;
	C s2;
	return 0;
}