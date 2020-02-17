#include<iostream>
using namespace std;

//重载函数   相同函数名   调用看相似性
int add(int x);
double add(double a);
int add(int x, int y);
//double add(int x, int y);
//void add(int x, int y);//无法返回 仅返回类型区别的函数
void add(double x, int y);
void add(int y, double x);
//void add(int x, double y);//这种类型没区别   肯定无法区分  但不报错

int main() {
	int x(1);
	double a(1.11);
	//add(x);
	//cout << endl;
	//add(a);
	int y(2);
	//add(x);
	//cout << endl;
	//add(3.3,12);
	//cout << endl;
	//add(22,2.2);
	add(x, y);
	cout << endl;
	//add(y,x );




	return 0;
}
int add(int x) {
	cout<<x;
	return 0;
}
double add(double a) {
	cout<<a;
	return 0;
}
int add(int x, int y) {
	cout << x <<"\t"<< y;
	return 0;
}
void add(double x, int y) {
	cout << x << "\t" << y;

}
void add(int y, double x) {


	cout << y << "\t" << x;
}

