#include "Uisystem.h"
#include"Maop.h"
#include"Kuaisu.h"
#include"Charu.h"
#include"Xuanze.h"

//计科1904 熊义路 319102010436

bool Uisystem::choice()
{
	//cout << "这里是算法排序工具" << endl;
	Maop m1;
	Charu c1;
	Kuaisu k1;
	Xuanze x1;
	int num;
	num = m1.isfalse();
	li;
	PC;
	switch (num)
	{
	case 0:
		cout << "退出程序" << endl;
		return true;
	case 1:									//冒泡排序
		m1.scanfList();
		m1.show();
		m1.sort();
		break;
	case 2:									//插入排序
		c1.scanfList();
		c1.show();
		c1.sort();
		break;
	case 3:									//快速排序
		k1.scanfList();
		k1.show();
		k1.sort();
		break;
	case 4:									//选择排序
		x1.scanfList();
		x1.show();
		x1.sort();
		break;
	default:
		cout << "无此选项,换个选项吧" << endl;
		break;
	}

	//Sort *a1 = new Maop();//冒泡对象类型转换



	return 0;
}

Uisystem::Uisystem()
{
		cout << "					这里是算法排序工具" << endl;
		cout << "=================================================================================" << endl;
		cout << "                     请根据以下序号，输入正确数字选择排序方法  " << endl;
		cout << "			1					冒泡排序	      " << endl;
		cout << "			2					直接插入排序	  " << endl;
		cout << "			3					快速排序	      " << endl;
		cout << "			4					选择排序	      " << endl;
		cout << "			0					退    出	      " << endl;
}

int main() {
	while (1)
	{
		
		Uisystem u1;
		if (u1.choice()) {//选择是否退出
			break;
		}

	}
	
	return 0;
}