#pragma once
#include "SysUser.h"

// 系统安全管理，包含登录、注册
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

