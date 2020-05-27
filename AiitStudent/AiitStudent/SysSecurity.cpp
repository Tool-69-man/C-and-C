#include "stdafx.h"
#include "SysSecurity.h"


SysSecurity::SysSecurity()
{
	count = 0;
	capacity = 2;
	userList = new SysUser[2];

	// Ôö¼Ó²âÊÔÊý¾Ý
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
	cout << "ÇëÊäÈëµÇÂ¼ID£º" << endl;
	cin >> uid;

	cout << "ÇëÊäÈëµÇÂ¼ÃÜÂë£º" << endl;
	cin >> pwd;

	bool res = signIn(uid, pwd);
	return res;
}