#include "Charu.h"

void Charu::sortlistUp()
{
	CLS;
	cout << "��ʼֱ�Ӳ�����������" << endl;
	int temp = 0;
	int i = 0;
	int j = 0;
	int jiao = 0;
	for ( i = 1; i <count; i++)
	{
		
			temp = listnum[i].num;

			for (j = i - 1; j >= 0 && listnum[j].num > temp; --j)
			{
				listnum[j + 1].num = listnum[j].num;
				show();
				jiao++;
				cout << "��ʼչʾ��" << jiao << "�˹���" << endl;
			}
			listnum[j + 1].num = temp;
		
	}
	PC;
	cout << "��ʼչʾ���" << endl;
	li;
	cout << "������" << jiao << "�����ֱȽ�" << endl;
	cout << "ƽ��ʱ�临�Ӷ�O(n*n),��ʱ�临�Ӷ�O(n),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(1),�ȶ������򷽷�" << endl;
	li;
	show();
}

void Charu::sortlistDown()
{
	cout << "��ʼֱ�Ӳ���������" << endl;
	int temp = 0;
	int i = 0;
	int j=0;
	int jiao = 0;
	for (i = 1; i < count; i++)
	{
		temp = listnum[i].num;
		
		for (j = i - 1; j >= 0 && listnum[j].num < temp; --j)
		{
			listnum[j + 1].num = listnum[j].num;
			jiao++;
			cout << "��ʼչʾ��" << jiao << "�˹���" << endl;
			show();
		}
		listnum[j+1].num = temp;
	}
	PC;
	cout << "��ʼչʾ���" << endl;
	li;
	cout << "������" << jiao << "�����ֱȽ�" << endl;
	cout << "ƽ��ʱ�临�Ӷ�O(n*n),��ʱ�临�Ӷ�O(n),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(1),�ȶ������򷽷�" << endl;
	li;
	show();
}

void Charu::sort()
{
	while (1)
	{
		PC;
		cout << "�������� ������ 0 " << endl << "�������� ������ 1 " << endl;
		int num = -1;
		num = isfalse();
		if (num == 0) {
			sortlistUp();
			PC;
			break;
		}
		else if (num == 1)
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
