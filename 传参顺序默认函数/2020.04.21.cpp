#include<iostream>
#include<string>
using namespace std;
void fun(int a, int b = 10, int c = 20) {
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;
	
}
int main() {

	int a, b, c;
	fun(1, 5);
	fun(25, c = 25);
	fun(c = 30, a = 100);
	fun(c = 30, a = 100,999);

	return 0;
}
