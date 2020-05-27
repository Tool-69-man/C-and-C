#include<iostream>
#include<string>
using namespace std;
//struct LLL {
//
//	int i;
//}kkk;
int main() {
	/*using LOL = int;
	LOL a = 10;
	cout << a<<endl;
 
	using  阿达 =char;
	*/



	//typedef char str[10];
	//str c[10], b;
	////cin >> c;//报错
	//cin >> b;//记住  输入>=10 错
	//cout << b << endl;

	//using   汉字 = string;
	//汉字  www = { "汉字" };
	//cout << www << endl;

	//string nn[10] = {"我爱罗"};
	//cout << nn << endl;//给我nn[0]的地址    服了

		
	//using   数组20 = char ik[20];   
	//using num = int a[20];
	//❌ 不能像typedef一样搞数组

	//判断using 与typedef 用法是否一样
	//1   改名可以✔
	//2   数组❌   char和int 都不行  只能改string 和 int
	//3   结构体✔
	/*string oo;
	cin >> oo ;
	cout << oo << endl;
	*/







	/*struct LLL {

		int i;
	}kk;
	kk.i = 10;
	cout << kk.i << endl;*/

	/*using pop = struct list;*///此时 并不是改名字那么简单
	//using pop = list;
	/*list;
	pop */
	/*struct pop {

		int h;
	}HHH;
	HHH.h = 55;
	cout << HHH.h << endl;*/
	/*struct pop {

		int h;
	}HHH;
	HHH.h = 55;
	cout << HHH.h << endl;*/
	/*pop{
	int c;
	}UUU;*/
	//有点意思  这个东西  放出来后下面的结构体就报错
	//感觉是 检查错误的程序出错
	/*struct LLL {

		int i;
	}kk;
	kk.i = 122;
	cout << kk.i << endl;*/
	/*using struct list {



	}link;*/
	using pop = struct list {
	
		int num;//以上  50 至100 行 实验总结 要写全结构体
	};
	pop L;
	L.num = 12345;
	std::cout << L.num << endl;


	//typedef struct OKOK;
	//OKOK KKK{};     typedef 这样定义也是错的     
	//上面有点瞎折腾   结构体没写全
	return 0;
}