#include<iostream>
#include<string>
using namespace std;
int main() {

	//int p = 1212;
	//const int p1 = p;//不能改变，顶层const
	//p = 12;
	//cout << "p:" << p << endl;
	//cout << "p1:" << p1 << endl;
	////p1 = 111;不能改变 p1    能改变p

	////引用实验

	//const int i = 1;
	////int &a=i;   无法用变量引用常量
	//const int& a = i;
	////a = 34;无法改变引用

	//int c1=1;
	//int c2=2;
	//int c3=3;
	//const int *p1 = &c1;//p1能改变，底层const
	// int const* p2 = &c2;
	// int *const p3 = &c3;//p3 无法改变 ，顶层const
	// //c1,c2,c3 赋值可以改变
	// cout << p1 <<endl
	//	 << p2 <<endl
	//	 <<p3 << endl;
	// cout << *p1<<endl
	//	 << *p2<<endl 
	//	 << *p3 << endl;
	

	// char  str1[20] = {"first"};
	// char   str2[20] = {"second"};
	// const char* chptr1 = &str1[0];
	// char *const chptr2 = &str2[0];
	// const char* const chptr3 = &str1[0];
	// cout << *chptr2 << endl;
	// cout << *chptr1 << endl;
	// //*chptr1 = 'C';//错误
	// *chptr2 = 'C';
	// chptr1 = &str2[0];
	//// chptr2 = &str2[0];//错误
	//// chptr3 = &str2[0];//错误
	// cout << *chptr2 << endl;
	// cout << *chptr1 << endl;



	 const char* W = "qweqwe";
	 const char m1 = 'q';
	 char   const  m2 = 'q';
	 const char* m3 = "qw";
		 char const* m4 = "qw";
		 cout << "m1:\t" << m1 << endl;
		 cout << "m2:\t" << m2 << endl;
		 cout << "m3:\t" << m3 << endl << "*m3:\t" << *m3 << endl;
		 cout << "m4:\t" << m4 << endl << "*m4:\t" << *m4 << endl;

		 cout << "*********************************************" << endl;
		// m1 = W;//错误
		// m2 = 'e';//错误
		 m3 = "qwe";
		// m3 = W;
		 m4 = "qwe";
		 //m4 = W;
		 cout << "m1:\t"<<m1 << endl;
		 cout << "m2:\t"<<m2 << endl;
		 cout <<"m3:\t"<< m3 <<endl<< "*m3:\t"<<*m3<< endl;
		 cout <<"m4:\t" <<m4<<endl<<"*m4:\t"<<*m4 << endl;

	//const char* const * c = "LL";错误
	


	return 0;
}