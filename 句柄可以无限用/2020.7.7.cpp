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
		/*T.get(ch,size," "&&"\n");*/				// char*  int   bool ��׺û�ж����k   �Ͼ�  Ϊ�ո�ͻ���
		//T.getline(ch,size);���ֲ�֧��
		T.get(ch);
		cout << ch;
		/*buf.put(ch);*/
		
	}	
	//�ı�����֮��һ��Ҫ�пո���л���������ʽ
	//cout << buf.str();
	cout <<endl<< "�ļ���ȡ����----------------------------" << endl;
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