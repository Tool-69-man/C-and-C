#include "school.h"

bool school::add()
{
	cout << "------------------------" << endl;
	cout << "	开始添加学生" << endl;
	cout << "------------------------" << endl;
	++ num;
	cout << "************************" << endl;
	cout << "请输入你想添加学生的姓名" << endl;
	cout << "------------------------" << endl;
	cin >> people[num].name;
	cout <<endl <<"请输入你想添加学生的年龄" << endl;
	cout << "------------------------" << endl;
	cin >> people[num].age;
	cout <<endl<< "请输入你想添加学生的班级" << endl;
	cout << "************************" << endl;
	cin >> people[num].grade;

	return true;
}

bool school::destroy()
{
	cout << "请输入你想删除的学生" << endl;
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
	cout << "没找到你想删除的学生记录" << endl;
	return false;
}

Child school::query()
{
	ii:
	cout << "请输入你要查询的学生姓名" << endl;
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
	cout << "未找到你要查询的学生" << endl;
	int a=0;
	cout << "是否重新输入" << endl;
	cout << "(0)	YES" << endl;
	cout << "(1)	NO  " << endl;
	cin >> a;
	if (a)
	{
		CLS;
		cout << "退出" << endl;
		PC;
		cout << "未找到所查询，默认输出第一位同学" << endl;
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
	cout << "请输入你要改变的学生的姓名" << endl;
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
			cout << "请输入你想要改变的信息的序号" << endl;
			cout << "你想改变" << str1 << "的："<<endl;
			cout << "1. 姓名" << endl;
			cout << "-----------------" << endl;
			cout << "2. 年龄" << endl;
			cout << "-----------------" << endl;
			cout << "3. 年级" << endl;
			cout << "-----------------" << endl;
			cout << "4. 退出更改" << endl;
			cout << "-----------------" << endl;

			cin >> str2;
			switch (str2)
			{
			case 1:
				cout << "请输入新的姓名" << endl;
				cin >> people[i].name;
				goto end;
			case 2:
				cout << "请输入新的年龄" << endl;
				cin >> people[i].age;
				goto end;
			case 3:
				cout << "请输入新的年级" << endl;
				cin >> people[i].grade;
				goto end;
			case 4:
				cout << "保存完成" << endl;
				return true;
				
			default:
				cout << "输入错误，重新输入" << endl;
				goto ooo;
			}
		}
	}
	cout << "未找到你要查询的学生" << endl;
	return false;

}

void school::showall()
{
	
	int i;
	for (i = 0; i <=num; i++)
	{
		
		cout << "名字" << people[i].name << endl;
		cout << "------------------" << endl;
		cout << "年龄" << people[i].age << endl;
		cout << "------------------" << endl;
		cout << "年级" << people[i].grade << endl<<endl;
		
	}
	PC;
}

school::school()
{
	string	name[MAX] = {"艾伦","梨斗","修","月","鲁鲁修"};
	string gra[MAX] = {"中班","小班","小班","大班","","大班"};
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
		cout<<"名字:"<<people[i].name <<endl;
		cout << "------------------" << endl;
		cout<<"年龄:"<<people[i].age <<endl;
		cout << "------------------" << endl;
		cout<<"年级:"<<people[i].grade<< endl<<endl;
		
		
	}

}

school::~school()
{
}
