#include "Xuanze.h"

void Xuanze::sortlistUp()
{
	cout << "��ʼѡ����������" << endl;
	int i=0;
	int j=0;
	int jiao = 0;
	int ccc = 0;
	for ( i = 0; i < count; i++)
	{
		int min = i;
		for ( j = 0; j < count-i; j++)
		{
			if (listnum[min].num > listnum[j].num) {
				min = j;
			
			}
			ccc++;
		}
		int temp = listnum[min].num;
		listnum[min].num = listnum[i].num;
		listnum[i].num = temp;
		show();
		jiao++;
	}
	li;
	cout << "������" << jiao << "�����ֽ���" << endl;
	cout << "������" << ccc << "�����ֱȽ�" << endl;
	cout << "ƽ��ʱ�临�Ӷ�O(n*n),��ʱ�临�Ӷ�O(n*n),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(1),���ȶ������򷽷�" << endl;
	li;
	show();
}

void Xuanze::sortlistDown()
{
	cout << "��ʼѡ��������" << endl;
	int i = 0;
	int j = 0;
	int jiao = 0;
	int ccc = 0;
	for (i = 0; i < count-1; i++)
	{
		int min = i;
		for (j = i+1; j < count ; j++)
		{
			if (listnum[min].num < listnum[j].num) {
				min = j;
				
			}
			ccc++;
		}
		int temp = listnum[min].num;
		listnum[min].num = listnum[i].num;
		listnum[i].num = temp;
		show();
		jiao++;
	}
	li;
	cout << "������" << jiao << "�����ֽ���" << endl;
	cout << "������" << ccc << "�����ֱȽ�" << endl;
	cout << "ƽ��ʱ�临�Ӷ�O(n*n),��ʱ�临�Ӷ�O(n*n),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(1),���ȶ������򷽷�" << endl;
	li;
	show();
}

void Xuanze::sort()
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


