#include<Windows.h>
#include"resource.h"//含有图标


//入口函数
int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPreInstance, LPSTR lpCmdLine, int nCmdshow) {
	//一 做一个窗口
	//1.设计窗口类
	WNDCLASS wc = { 0 };
	wc.hbrBackground = CreateSolidBrush(RGB(0,255,0));//加载绿色画刷（绿色背景） 
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);//加载系统光标
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));//加载图标

	//2.注册窗口类
	//3.创建窗口
	//4.显示窗口
	//5.更新窗口
	//6.消息循环






	return 0;
}