#include "sort.h"

int Sort::isfalse()
{
	int index=0;
	while (1)
	{

		cin >> index;
		br;
		if (cin.fail())//判断是否输入数字
		{
			cout << "输入错误,请输入数字" << endl;
			br;
			cin.clear();//重置输入状态
			//cin.ignore();
			//cin.sync();//清楚缓存区未读消息
			//continue;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	
	}
	return index;

}

void Sort::show()
{
	cout << count << "个数字排列结果" << endl;
	cout << "开始展示" << endl;
	int i = 0;
	while (i < count)
	{
		listnum[i].show();
		i++;
	}
	br;
	li;
}

void Sort::scanfList()
{
	int i = 0;
	while (++i) {
		if (count == capacity)
		{
			add();
		}
		int flag = 1;
		cout << "请输入第" << i << "数字(不支持11位及以上数字):";
		listnum[i - 1].num = isfalse();
		cout << "***" << endl;
		count++;

		cout << "是否继续输入（结束:	请输入 '0' ，继续:		请输入'非0'数字）:";
		flag = isfalse();
		br;
		if (!flag) {
			cout << "结束输入" << endl;
			break;
		}
		if (count == capacity)
		{
			add();
		}
	}
}

void Sort::goSort(Sort a1)
{
	//开始排序
	/*a1.scanfList();
	a1.show();
	a1.sort();*/
}


void Sort::add()
{
	this->capacity *= 2;
	Num* newlist = new Num[this->capacity];
	// 将原数组内容拷贝至新数组
	memcpy(newlist, listnum, count * sizeof(Num));

	// 将原数组占用空间释放
	delete[] listnum;
	// 指针指向新的地址
	listnum = newlist;
	cout << "超出数组范围，容量翻倍" << endl;
	br;
	li;
	PC;
}



Sort::Sort(int capacity)
{
	count = 0;
	this->capacity = capacity;
	listnum = new Num[capacity];  //建立数组对象
}

Sort::Sort() :Sort(maxnum)
{
}


