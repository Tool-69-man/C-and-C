#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	//int a, b;
	//float c, d=4;
	//cin >> a >> c;//               cin>>"a=">>a;   ����
	//cout << a <<c<<endl;//         endl����     
	//cin >> b >> b;//����������ߵ�b,�������ұ�   ���ֵΪ�ұߵ�
	//cout << "b="<<b<<endl;//       cout ����ַ���
	//cout << "d="<<"    "<<  d;//   cout<<"d="d<<"   "d;���Ǵ����
	


	//char x[20]("����ħ��\n");//����ĳ�ʼ��   ������
	//cout<<x<<"ǰһ�л��У������ܣ�����" << endl;
	//����ַ������鲻��Ҫforѭ����

	//cout << "�����ҵĴ�" << endl << "���������Ĵ�" << endl;


	char f[20];
	//cin >> f;//��Ҫforѭ��   ����scanf   ����gets   
	//cout << f<<endl;//�м� �пո� ��������������
	//cout << f[1]<<endl;//��ĸ������� f[1]    ���ֲ���  �Ͼ�����ռ�����λ�ô�Щ
	int i;
	for ( i = 0; i < 5; i++)
	{
		cin >> f[i];
	}
	for ( i = 0; i < 7; i++)//������5����ĸ   �������6����ĸ�����
	{
		cout << f[i];//
	}
	cout<<endl;
	cout<<f<<endl;//���
	return 0;
}