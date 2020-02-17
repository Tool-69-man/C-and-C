#include<iostream>//为什么会有#include<iostream.h>


//using namespace std;

//C++ 有序言注释   说明程序  名称  用途  编写时间
//本程序用于计算累加和
void main() {
	const int num = 10;//const 是C++提供的另一种 定义符号常量方法
	                    //#define 同样能用    const 需指明类型
	int i = 0;
	int sum(0);//C++中增加的 初始化方法     将sum  初始化为0
	while (i <= num)
	{
		sum += i++;
	}
	/*cout << '\n';
	cout << '\n'<<sum<<sum;
	cout << '\n';
	cout << sum;*/
	std::cout << '\n';
	std::cout << '\  a';//  'a'仍然为a 但是  '\ a'输出 8289
	std::cout << '\n';
	std::cout << "\ a";//   "a"仍然为   "\ a"  会输出  空格a
	std::cout << '\n';
	std::cout << sum<<'12';//'12'   会显示12594   每多个空格会有一串数字
	std::cout << '\n';
	std::cout << sum<<'a';
	std::cout << '\n';
	std::cout << ' ';//一下空格均为空格
	std::cout << 1;
	std::cout << " ";
	std::cout << 1;
	std::cout << '\ ';
	std::cout << 1;
	std::cout << "\ ";
	std::cout << 1;
	//std::cout<< sum;/*输出sum    但是书上  没有  std::  

 //    VS 提示 有两种方法    添加 using namespace std; 
	//                       或使用  std::
	//		    同时使用无影响
 //              cout 输出 将 插入运算符<< 右侧内容 输出到屏幕
 //              cout 必需与 << 连用   */
	//cout << sum;

}