#include"school.h"

int main() {
	school s1;
	while (true)
	{
		
	all:
		PC;
		cout << "(1)	增加学生信息" << endl;
		cout << "(2)	删除学生信息" << endl;
		cout << "(3)	改变学生信息" << endl;
		cout << "(4)	查找学生信息" << endl;
		cout << "(5)	展示学生信息" << endl;
		cout << "请输入你想执行的操作序号" << endl;
		int a;
		cin >> a;
		PC;
		switch (a)
		{
		case 1:
			s1.add();
			goto all;
		case 2:
			s1.destroy();
			goto all;
		case 3:
			s1.change();
			goto all;
		case 4:
			s1.query().show();
			PC;
			goto all;
		case 5:
			s1.showall();
			goto all;
		default:
			cout << "错误输入，重新输入" << endl;
			PC;
			goto all;
		}
	}
	return 0;
}