#include "stdafx.h"
#include "SysSecurity.h"


SysSecurity::SysSecurity()
{
	count = 0;
	capacity = 2;
	userList = new SysUser[2];

	// ���Ӳ�������
	userList[0].uid = "admin";
	userList[0].pwd = "123";
	count = 1;
}


SysSecurity::~SysSecurity()
{
}

bool SysSecurity::signIn(string uid, string pwd)
{
	for (int i = 0; i < count; i++)
	{
		if (userList[i].uid == uid&&userList[i].pwd == pwd)
		{
			return true;
		}
	}
	return false;
}

bool SysSecurity::showLogin()
{
	string uid, pwd;
	cout << "�������¼ID��" << endl;
	cin >> uid;

	cout << "�������¼���룺" << endl;
	cin >> pwd;

	bool res = signIn(uid, pwd);
	return res;
}