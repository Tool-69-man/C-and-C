#include "Maop.h"

void Maop::sortlistUp()
{
	cout << "��ʼ�����ð������" << endl;
	int i = 0;
	int j = 0;
	int jiao = 0;
	int ccc = 0;
	for (i = 0; i < count-1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (listnum[j].num > listnum[j + 1].num) {
				int temp = 0;
				temp = listnum[j + 1].num;
				listnum[j + 1].num = listnum[j].num;
				listnum[j].num = temp;
				show();
				jiao++;
			}
			ccc++;
		}
	}
	PC;
	cout << "��ʼչʾ���" << endl;
	li;
	cout << "������" << jiao << "�����ֽ���" << endl;
	cout << "������" << ccc << "�����ֱȽ�" << endl;
	cout << "ƽ��ʱ�临�Ӷ�O(n*n),��ʱ�临�Ӷ�O(n),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(1),�ȶ������򷽷�" << endl;
	li;
	show();

	PC;
}

void Maop::sortlistDown()
{
	cout << "��ʼ�����ð������" << endl;
	int i = 0;
	int j = 0;
	int ccc = 0;
	int jiao = 0;
	for (i = 0; i < count-1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (listnum[j].num < listnum[j + 1].num) {
				int temp = 0;
				temp = listnum[j + 1].num;
				listnum[j + 1].num = listnum[j].num;
				listnum[j].num = temp;
				show();
				jiao++;
			}
			ccc++;
		}
	}
	li;
	cout << "������" << jiao << "�����ֽ���" << endl;
	cout << "������" << ccc << "�����ֱȽ�" << endl;
	cout << "ƽ��ʱ�临�Ӷ�O(n*n),��ʱ�临�Ӷ�O(n),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(1),�ȶ������򷽷�" << endl;
	li;
	show();
}

void Maop::sort() {
	while (1)
	{
		PC;
		cout << "�������� ������ 0 " << endl << "�������� ������ 1 " << endl;
		int num = -1;
		num = isfalse();
		if (num==0) {
			sortlistUp();
			PC;
			break;
		}
		else if(num==1)
		{

			sortlistDown();
			PC;
			break;
		}
		else
		{
			cout << "���������������" << endl;
			continue;
		}
	}
}
