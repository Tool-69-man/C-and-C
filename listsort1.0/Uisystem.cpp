#include "Uisystem.h"
#include"Maop.h"
#include"Kuaisu.h"
#include"Charu.h"
#include"Xuanze.h"

//�ƿ�1904 ����· 319102010436

bool Uisystem::choice()
{
	//cout << "�������㷨���򹤾�" << endl;
	Maop m1;
	Charu c1;
	Kuaisu k1;
	Xuanze x1;
	int num;
	num = m1.isfalse();
	li;
	PC;
	switch (num)
	{
	case 0:
		cout << "�˳�����" << endl;
		return true;
	case 1:									//ð������
		m1.scanfList();
		m1.show();
		m1.sort();
		break;
	case 2:									//��������
		c1.scanfList();
		c1.show();
		c1.sort();
		break;
	case 3:									//��������
		k1.scanfList();
		k1.show();
		k1.sort();
		break;
	case 4:									//ѡ������
		x1.scanfList();
		x1.show();
		x1.sort();
		break;
	default:
		cout << "�޴�ѡ��,����ѡ���" << endl;
		break;
	}

	//Sort *a1 = new Maop();//ð�ݶ�������ת��



	return 0;
}

Uisystem::Uisystem()
{
		cout << "					�������㷨���򹤾�" << endl;
		cout << "=================================================================================" << endl;
		cout << "                     �����������ţ�������ȷ����ѡ�����򷽷�  " << endl;
		cout << "			1					ð������	      " << endl;
		cout << "			2					ֱ�Ӳ�������	  " << endl;
		cout << "			3					��������	      " << endl;
		cout << "			4					ѡ������	      " << endl;
		cout << "			0					��    ��	      " << endl;
}

int main() {
	while (1)
	{
		
		Uisystem u1;
		if (u1.choice()) {//ѡ���Ƿ��˳�
			break;
		}

	}
	
	return 0;
}