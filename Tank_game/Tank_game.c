#include<Windows.h>
#include"resource.h"//����ͼ��


//��ں���
int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPreInstance, LPSTR lpCmdLine, int nCmdshow) {
	//һ ��һ������
	//1.��ƴ�����
	WNDCLASS wc = { 0 };
	wc.hbrBackground = CreateSolidBrush(RGB(0,255,0));//������ɫ��ˢ����ɫ������ 
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);//����ϵͳ���
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));//����ͼ��

	//2.ע�ᴰ����
	//3.��������
	//4.��ʾ����
	//5.���´���
	//6.��Ϣѭ��






	return 0;
}