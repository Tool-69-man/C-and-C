#include"school.h"

int main() {
	school s1;
	while (true)
	{
		
	all:
		PC;
		cout << "(1)	����ѧ����Ϣ" << endl;
		cout << "(2)	ɾ��ѧ����Ϣ" << endl;
		cout << "(3)	�ı�ѧ����Ϣ" << endl;
		cout << "(4)	����ѧ����Ϣ" << endl;
		cout << "(5)	չʾѧ����Ϣ" << endl;
		cout << "����������ִ�еĲ������" << endl;
		int a;
		cin >> a;
		PC;
		switch (a)
		{
		case 1:
			s1.add();
			goto all;
		case 2:
			s1.destroy();
			goto all;
		case 3:
			s1.change();
			goto all;
		case 4:
			s1.query().show();
			PC;
			goto all;
		case 5:
			s1.showall();
			goto all;
		default:
			cout << "�������룬��������" << endl;
			PC;
			goto all;
		}
	}
	return 0;
}