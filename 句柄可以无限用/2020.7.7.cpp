#include<fstream>
#include<string>
#include<sstream>//ostringstrieam
#include <iostream>
using namespace std;

void showAll(ifstream &T) {
	/*const int size = 10;
	char ch[size];*/
	char ch;
	/*ostringstream buf;*/
	while (!T.eof())
	{
		/*T.get(ch,size," "&&"\n");*/				// char*  int   bool 后缀没有多余的k   断句  为空格和换行
		//T.getline(ch,size);汉字不支持
		T.get(ch);
		cout << ch;
		/*buf.put(ch);*/
		
	}	
	//文本结束之后一定要有空格或换行或以文字形式
	//cout << buf.str();
	cout <<endl<< "文件读取结束----------------------------" << endl;
}

int main() {
	ifstream T("C:\\Users\\28215\\source\\repos\\file1.txt");
	showAll(T);
	T.close();

	T.open("C:\\Users\\28215\\source\\repos\\file2.txt");
	showAll(T);
	T.close();

	return 0;
}