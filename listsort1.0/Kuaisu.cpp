#include "Kuaisu.h"

void Kuaisu::sortlistUp(int low, int high)
{
	if (low<high)
	{
		int cen = quick1(low, high);
		sortlistUp(low, cen - 1);//左递归
		sortlistUp(cen + 1, high);//右子表
	}
	
}

void Kuaisu::sortlistDown()
{
	int i=0;
	for ( i = 0; i < count/2; i++)
	{
		int temp = listnum[i].num;
		listnum[i].num = listnum[count - i-1].num;
		listnum[count - i-1].num = temp;
	}
	li;
	show();
}

void Kuaisu::sort()
{
	while (1)
	{
		PC;
		cout << "升序排列 请输入 0 " << endl << "降序排列 请输入 1 " << endl;
		int num = -1;
		num = isfalse();
		if (num == 0) {
			cout << "开始快速排序升序" << endl;
			sortlistUp(0 ,count-1);
			show();
			cout << "开始展示结果" << endl;
			li;
			cout << "进行了" << this->jiao << "次数字变换" << endl;
			cout << "下标low, high移动了" << this->num << "趟" << endl;
			cout << "平均时间复杂度O(nlogn),简单时间复杂度O(nlogn),复杂时间复杂度O(n*n)，空间复杂度O(logn),不稳定的排序方法" << endl;

			PC;
			break;
		}
		else if (num == 1)
		{
			cout << "开始快速排序降序" << endl;
			sortlistUp(0, count-1);

			//qsort(listnum,count,sizeof(Num),0);




			sortlistDown();
			cout << "开始展示结果" << endl;
			li;
			cout << "进行了" << this->jiao << "次数字变换" << endl;
			cout << "下标low, high移动了" << this->num << "趟" << endl;
			cout << "平均时间复杂度O(nlogn),简单时间复杂度O(nlogn),复杂时间复杂度O(n*n)，空间复杂度O(logn),不稳定的排序方法" << endl;
			PC;
			break;
		}
		else
		{
			cout << "输入错误，重新输入" << endl;
			continue;
		}
	}
}

int Kuaisu::quick1(int low, int high)
{
	int cen = listnum[low].num;

	while (low < high)
	{
		while (low<high && listnum[high].num>cen) {
			--high;
			this->num++;
		}
		listnum[low].num = listnum[high].num;
		this->jiao++;
		while (low < high && listnum[low].num <= cen) {
			low++;
			this->num++;
		}
		listnum[high].num = listnum[low].num;
		show();
		this->jiao++;
	}
	listnum[low].num = cen;
	this->jiao++;
	cout << "变量哨兵" << cen << endl;
	show();
	return low;
}
