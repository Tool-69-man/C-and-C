#include "sort.h"

int Sort::isfalse()
{
	int index=0;
	while (1)
	{

		cin >> index;
		br;
		if (cin.fail())//�ж��Ƿ���������
		{
			cout << "�������,����������" << endl;
			br;
			cin.clear();//��������״̬
			//cin.ignore();
			//cin.sync();//���������δ����Ϣ
			//continue;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	
	}
	return index;

}

void Sort::show()
{
	cout << count << "���������н��" << endl;
	cout << "��ʼչʾ" << endl;
	int i = 0;
	while (i < count)
	{
		listnum[i].show();
		i++;
	}
	br;
	li;
}

void Sort::scanfList()
{
	int i = 0;
	while (++i) {
		if (count == capacity)
		{
			add();
		}
		int flag = 1;
		cout << "�������" << i << "����(��֧��11λ����������):";
		listnum[i - 1].num = isfalse();
		cout << "***" << endl;
		count++;

		cout << "�Ƿ�������루����:	������ '0' ������:		������'��0'���֣�:";
		flag = isfalse();
		br;
		if (!flag) {
			cout << "��������" << endl;
			break;
		}
		if (count == capacity)
		{
			add();
		}
	}
}

void Sort::goSort()
{


}

void Sort::add()
{
	this->capacity *= 2;
	Num* newlist = new Num[this->capacity];
	// ��ԭ�������ݿ�����������
	memcpy(newlist, listnum, count * sizeof(Num));

	// ��ԭ����ռ�ÿռ��ͷ�
	delete[] listnum;
	// ָ��ָ���µĵ�ַ
	listnum = newlist;
	cout << "�������鷶Χ����������" << endl;
	br;
	li;
	PC;
}

void Sort::sortlistUp()
{

	int i = 0;
	int j = 0;

	for (i = 0; i < count; i++)
	{
		for (j = i; j < count - i - 1; j++)
		{
			if (listnum[j].num > listnum[j + 1].num) {
				int temp = 0;
				temp = listnum[j + 1].num;
				listnum[j + 1].num = listnum[j].num;
				listnum[j].num = temp;
			}
		}
	}
	cout << "���չʾ" << endl;
	show();

}

Sort::Sort(int capacity)
{
	count = 0;
	this->capacity = capacity;
	listnum = new Num[capacity];
}

Sort::Sort() :Sort(maxnum)
{
}


