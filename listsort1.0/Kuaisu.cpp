#include "Kuaisu.h"

void Kuaisu::sortlistUp(int low, int high)
{
	if (low<high)
	{
		int cen = quick1(low, high);
		sortlistUp(low, cen - 1);//��ݹ�
		sortlistUp(cen + 1, high);//���ӱ�
	}
	
}

void Kuaisu::sortlistDown()
{
	int i=0;
	for ( i = 0; i < count/2; i++)
	{
		int temp = listnum[i].num;
		listnum[i].num = listnum[count - i-1].num;
		listnum[count - i-1].num = temp;
	}
	li;
	show();
}

void Kuaisu::sort()
{
	while (1)
	{
		PC;
		cout << "�������� ������ 0 " << endl << "�������� ������ 1 " << endl;
		int num = -1;
		num = isfalse();
		if (num == 0) {
			cout << "��ʼ������������" << endl;
			sortlistUp(0 ,count-1);
			show();
			cout << "��ʼչʾ���" << endl;
			li;
			cout << "������" << this->jiao << "�����ֱ任" << endl;
			cout << "�±�low, high�ƶ���" << this->num << "��" << endl;
			cout << "ƽ��ʱ�临�Ӷ�O(nlogn),��ʱ�临�Ӷ�O(nlogn),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(logn),���ȶ������򷽷�" << endl;

			PC;
			break;
		}
		else if (num == 1)
		{
			cout << "��ʼ����������" << endl;
			sortlistUp(0, count-1);

			//qsort(listnum,count,sizeof(Num),0);




			sortlistDown();
			cout << "��ʼչʾ���" << endl;
			li;
			cout << "������" << this->jiao << "�����ֱ任" << endl;
			cout << "�±�low, high�ƶ���" << this->num << "��" << endl;
			cout << "ƽ��ʱ�临�Ӷ�O(nlogn),��ʱ�临�Ӷ�O(nlogn),����ʱ�临�Ӷ�O(n*n)���ռ临�Ӷ�O(logn),���ȶ������򷽷�" << endl;
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

int Kuaisu::quick1(int low, int high)
{
	int cen = listnum[low].num;

	while (low < high)
	{
		while (low<high && listnum[high].num>cen) {
			--high;
			this->num++;
		}
		listnum[low].num = listnum[high].num;
		this->jiao++;
		while (low < high && listnum[low].num <= cen) {
			low++;
			this->num++;
		}
		listnum[high].num = listnum[low].num;
		show();
		this->jiao++;
	}
	listnum[low].num = cen;
	this->jiao++;
	cout << "�����ڱ�" << cen << endl;
	show();
	return low;
}
