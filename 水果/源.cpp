#include<iostream>
#include<string>
using namespace std;
#define num1 10
class shueiguo
{
public:
	string name;
	int price;

	void show();
	shueiguo();
	shueiguo(string name, int price);
	~shueiguo();

};
void shueiguo::show()
{
	cout  << name << endl;

	cout  << price << endl;


}

shueiguo::shueiguo()
{
}

shueiguo::shueiguo(string name, int price)
{
	this->name = name;
	this->price = price;
	
}
shueiguo::~shueiguo()
{
}
class chaoshi
{
public:
	shueiguo dian[num1];
	int num;
	int turenum;
	bool add();
	bool shanchu();
	shueiguo query();
	bool change();
	void zhanshi();
	chaoshi();
	~chaoshi();

};
bool chaoshi::add()
{
	
	++num;
	
	cout << "���������" << endl;
	cin >> dian[num].name;
	cout << endl << "������۸�" << endl;

	cin >> dian[num].price;

	

	return true;
}

bool chaoshi::shanchu()
{
	cout << "����������ɾ��" << endl;
	int j = 0;
	
	string na;
	cin >> na;
	int i = 0;
	for (i = 0; i <= num; i++)
	{
		if (na == dian[i].name)
		{
			while (i <= num)
			{
				dian[i].price = dian[i + 1].price;
			
				dian[i].name = dian[i + 1].name;
				i++;
			}
			return  true;
		}
	}
	
	return false;
}

shueiguo chaoshi::query()
{

	cout << "�������ѯ������" << endl;
	string str;
	cin >> str;
	int i;
	for (i = 0; i <= num; i++)
	{
		if (str == dian[i].name)
		{
			return dian[i];
		}
	}
	return dian[0];
}

bool chaoshi::change()
{
	cout << "��������Ҫ�ı������" << endl;
	int j = 0;
	
	string aaaaa;
	cin >> aaaaa;
	int i;
	for (i = 0; i <= num; i++)
	{
		if (aaaaa == dian[i].name)
		{

			int  asdada;
			cout << "����Ҫ�ı�" << endl;
		
			cout << "1. ����" << endl;
	
			cout << "2. �۸�" << endl;

			cin >> asdada;
			switch (asdada)
			{
			case 1:
				cout << "�������µ�����" << endl;
				cin >> dian[i].name;
				continue;;
			case 2:
				cout << "�������µļ۸�" << endl;
				cin >> dian[i].price;
				continue;;
			
			default:
				cout << "���������������" << endl;
				continue;;
			}
		}
	}
	cout << "δ�ҵ���Ҫ��ѯ" << endl;
	return false;

}

void chaoshi::zhanshi()
{

	int i;
	for (i = 0; i <= num; i++)
	{

		cout  << dian[i].name << endl;
		
		cout << dian[i].price << endl;



	}

}

chaoshi::chaoshi()
{
	string	name[num1] = { "�㽶","ƻ��","���㽶","��ƻ��","������" };
	
	int price[num1] = { 123,123123,1232131244,12124124,244123 };
	int i = 0;
	turenum = 5;
	num = turenum - 1;
	for (i = 0; i <= num; i++)
	{
		dian[i].price = price[i];
		
		dian[i].name = name[i];
	}
	for (i = 0; i <= num; i++)
	{
		cout  << dian[i].name << endl;
		cout  << dian[i].price << endl;
	}

}

chaoshi::~chaoshi()
{
}
int main() {
	chaoshi s1;
	while (true)
	{

		cout << "1����" ;
		cout << "2ɾ��" ;
		cout << "3�ı�" ;
		cout << "4����" ;
		cout << "5չʾ";
		
		int r;
		cin >>r ;
	
		switch (r)
		{
		case 1:
			s1.add();
			continue;
		case 2:
			s1.shanchu();
			continue;
		case 3:
			s1.change();
			continue;
		case 4:
			s1.query().show();
	
			continue;
		case 5:
			s1.zhanshi();
			continue;
		default:
			cout << "�������룬��������" << endl;
	
			continue;
		}
	}
	return 0;
}