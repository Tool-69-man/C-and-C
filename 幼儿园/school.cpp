#include "school.h"

bool school::add()
{
	cout << "------------------------" << endl;
	cout << "	��ʼ���ѧ��" << endl;
	cout << "------------------------" << endl;
	++ num;
	cout << "************************" << endl;
	cout << "�������������ѧ��������" << endl;
	cout << "------------------------" << endl;
	cin >> people[num].name;
	cout <<endl <<"�������������ѧ��������" << endl;
	cout << "------------------------" << endl;
	cin >> people[num].age;
	cout <<endl<< "�������������ѧ���İ༶" << endl;
	cout << "************************" << endl;
	cin >> people[num].grade;

	return true;
}

bool school::destroy()
{
	cout << "����������ɾ����ѧ��" << endl;
	int j = 0;
	for ( j = 0; j <=num; j++)
	{
		cout << "----"<<people[j].name<<"----" << endl;
	}
	string na;
	cin >> na;
	int i=0;
	for ( i = 0; i <=num; i++)
	{
		if (na==people[i].name)
		{
			while (i <= num)
			{
				people[i].age = people[i + 1].age;
				people[i].grade = people[i + 1].grade;
				people[i].name = people[i + 1].name;
				i++;
			}
			return  true;
		}
	}
	cout << "û�ҵ�����ɾ����ѧ����¼" << endl;
	return false;
}

Child school::query()
{
	ii:
	cout << "��������Ҫ��ѯ��ѧ������" << endl;
	string str;
	cin >> str;
	int i;
	for ( i = 0; i <=num; i++)
	{
		if (str==people[i].name)
		{
			return people[i];
		}
	}
	cout << "δ�ҵ���Ҫ��ѯ��ѧ��" << endl;
	int a=0;
	cout << "�Ƿ���������" << endl;
	cout << "(0)	YES" << endl;
	cout << "(1)	NO  " << endl;
	cin >> a;
	if (a)
	{
		CLS;
		cout << "�˳�" << endl;
		PC;
		cout << "δ�ҵ�����ѯ��Ĭ�������һλͬѧ" << endl;
		return people[0];
	}
	int j = 0;
	for (j = 0; j <= num; j++)
	{
		cout << "----" << people[j].name << "----" << endl;
	}
	PC;
	goto ii;
}

bool school::change()
{	
	cout << "��������Ҫ�ı��ѧ��������" << endl;
	int j = 0;
	for (j = 0; j <= num; j++)
	{
		cout << "----" << people[j].name << "----" << endl;
	}
	cout << endl<<"------------------------------------------------" << endl<<endl;
	string str1;
	cin >> str1;
	int i;
	for (i = 0; i <= num; i++)
	{
		if (str1 == people[i].name)
		{	 end:
			int  str2;
			ooo:
			CLS;
			cout << "����������Ҫ�ı����Ϣ�����" << endl;
			cout << "����ı�" << str1 << "�ģ�"<<endl;
			cout << "1. ����" << endl;
			cout << "-----------------" << endl;
			cout << "2. ����" << endl;
			cout << "-----------------" << endl;
			cout << "3. �꼶" << endl;
			cout << "-----------------" << endl;
			cout << "4. �˳�����" << endl;
			cout << "-----------------" << endl;

			cin >> str2;
			switch (str2)
			{
			case 1:
				cout << "�������µ�����" << endl;
				cin >> people[i].name;
				goto end;
			case 2:
				cout << "�������µ�����" << endl;
				cin >> people[i].age;
				goto end;
			case 3:
				cout << "�������µ��꼶" << endl;
				cin >> people[i].grade;
				goto end;
			case 4:
				cout << "�������" << endl;
				return true;
				
			default:
				cout << "���������������" << endl;
				goto ooo;
			}
		}
	}
	cout << "δ�ҵ���Ҫ��ѯ��ѧ��" << endl;
	return false;

}

void school::showall()
{
	
	int i;
	for (i = 0; i <=num; i++)
	{
		
		cout << "����" << people[i].name << endl;
		cout << "------------------" << endl;
		cout << "����" << people[i].age << endl;
		cout << "------------------" << endl;
		cout << "�꼶" << people[i].grade << endl<<endl;
		
	}
	PC;
}

school::school()
{
	string	name[MAX] = {"����","�涷","��","��","³³��"};
	string gra[MAX] = {"�а�","С��","С��","���","","���"};
	int age[MAX] = {5,4,4,5,6};
	int i = 0;
	outNum = 5;
	num = outNum-1;
	for ( i = 0; i <=num; i++)
	{
		people[i].age = age[i];
		people[i].grade = gra[i];
		people[i].name = name[i];
	}
	for ( i = 0; i <=num; i++)
	{
		cout<<"����:"<<people[i].name <<endl;
		cout << "------------------" << endl;
		cout<<"����:"<<people[i].age <<endl;
		cout << "------------------" << endl;
		cout<<"�꼶:"<<people[i].grade<< endl<<endl;
		
		
	}

}

school::~school()
{
}
