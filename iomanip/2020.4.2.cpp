#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int mian() {
	cout << setw(30) <<endl;//���߿�  #include<iomanip> Ϊʲô ""
		cout << "| 1:" << setw(26) << "�������� ��lv  1��|" << endl;
		cout << "| 1:" <<  setw(26) << "  ��ħ   ��lv  5��|" << endl;
		cout << "| 1:" <<  setw(26) << "  ��ʹ   ��lv 10��|" << endl;
		cout << "| 1:" <<  setw(26) << "  ħ��   ��lv 30��|" << endl;
		cout << "| 1:" <<  setw(26) << "  �ϵ�   ��lv 50��|" << endl;
		cout << setw(30)<< endl;

	return 0;
}