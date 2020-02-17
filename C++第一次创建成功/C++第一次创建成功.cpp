#include<iostream>
//C++ 有序言注释   说明程序  名称  用途  编写时间
//本程序用于计算累加和
int main() {
	const int num = 10;//const 是C++提供的另一种 定义符号常量方法
						//#define 同样能用    const 需指明类型
	int i = 0;
	int sum(0);//C++中增加的 初始化方法     将sum  初始化为0
	while (i <= num)
	{
		sum += i++;
	}
	cout << sum;//
	return 0;
}