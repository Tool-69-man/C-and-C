#pragma once
#include "SysUser.h"

// ϵͳ��ȫ����������¼��ע��
class SysSecurity
{
public:
	SysSecurity();
	~SysSecurity();

	SysUser* userList;
	int count;
	int capacity;

	bool signIn(string uid, string pwd);
	bool showLogin();
};

