#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	//int a, b;
	//float c, d=4;
	//cin >> a >> c;//               cin>>"a=">>a;   报错
	//cout << a <<c<<endl;//         endl换行     
	//cin >> b >> b;//最先输入左边的b,后输入右边   最后值为右边的
	//cout << "b="<<b<<endl;//       cout 输出字符串
	//cout << "d="<<"    "<<  d;//   cout<<"d="d<<"   "d;都是错误的
	


	//char x[20]("我是魔王\n");//神奇的初始化   换行了
	//cout<<x<<"前一行换行？不可能！！！" << endl;
	//输出字符串数组不需要for循环了

	//cout << "不是我的错" << endl << "是这个世界的错" << endl;


	char f[20];
	//cin >> f;//不要for循环   等于scanf   不是gets   
	//cout << f<<endl;//中间 有空格 就输出不出后面的
	//cout << f[1]<<endl;//字母正常输出 f[1]    汉字不行  毕竟汉字占数组的位置大些
	int i;
	for ( i = 0; i < 5; i++)
	{
		cin >> f[i];
	}
	for ( i = 0; i < 7; i++)//输入了5个字母   输出大于6个字母就溢出
	{
		cout << f[i];//
	}
	cout<<endl;
	cout<<f<<endl;//溢出
	return 0;
}