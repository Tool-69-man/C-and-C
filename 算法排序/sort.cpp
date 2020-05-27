#include "sort.h"

int Sort::isfalse()
{	
	int index;
	cin >> index;
	br;
	if (!cin)//判断是否输入数字
	{	
		cout << "输入错误,请输入数字" << endl;
		br;
		cin.clear();//重置输入状态
		cin.sync();//清楚缓存区未读消息
		return -1;
	}
	return index;
}

void Sort::show()
{
	int i = 0;
	while (i<count)
	{
		listnum[i].show();
		i++;
	}
	
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
		cout << "请输入第" << i << "数字(不支持11位及以上数字):" ;
		listnum[i-1].num = isfalse();
		cout << "***" << endl;
		count++;

		cout << "是否继续输入（结束输入请输入 0 ，继续请输入任意数字）:";
		cin >> flag;
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

void Sort::goSort()
{
	cout << "开始排序" << endl;

	int num=isfalse();
	
	switch (num)
	{
	case 1:
		cout << "开始冒泡排序 选择1升序0降序" << endl;
	
		int a;
		cin >> a;
		if (a) {
			sortlistUp();
			break;
		}
	//	a2.sortlistDown(qq);
		break;
	default:
		cout << "错误选择" << endl;
		break;
	}

}

void Sort::add()
{
	this->capacity *= 2;
	Num* newlist = new Num[this->capacity];
	// 将原数组内容拷贝至新数组
	memcpy(newlist,listnum,count*sizeof(Num));
	
	// 将原数组占用空间释放
	delete[] listnum;
	// 指针指向新的地址
	listnum = newlist;
	cout << "超出数组范围，容量翻倍" << endl;
	br;
}

void Sort::sortlistUp()
{
	
		int i = 0;
		int j = 0;

		for (i = 0; i < count; i++)
		{
			for (j = i; j < count - i - 1; j++)
			{
				if (listnum[j].num > listnum[j + 1].num) {
					int temp = 0;
					temp = listnum[j + 1].num;
					listnum[j + 1].num = listnum[j].num;
					listnum[j].num = temp;
				}
			}
		}
		cout << "结果展示" << endl;
		show();
	
}

Sort::Sort(int capacity)
{
	count = 0;
	this->capacity = capacity;
	listnum = new Num[capacity];
}

Sort::Sort():Sort(maxnum)
{
}


