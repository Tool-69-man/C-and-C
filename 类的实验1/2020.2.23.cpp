#include<iostream>
using namespace std;
class MyClass
{
public:
	void init(int xx,int yy);
	int getx() { return X; }
	int grty() { return Y; }

private:
	int X, Y;
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}