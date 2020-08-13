#include "Charu.h"

void Charu::sortlistUp()
{
	CLS;
	cout << "开始直接插入排序升序" << endl;
	int temp = 0;
	int i = 0;
	int j = 0;
	int jiao = 0;
	for ( i = 1; i <count; i++)
	{
		
			temp = listnum[i].num;

			for (j = i - 1; j >= 0 && listnum[j].num > temp; --j)
			{
				listnum[j + 1].num = listnum[j].num;
				show();
				jiao++;
				cout << "开始展示第" << jiao << "趟过程" << endl;
			}
			listnum[j + 1].num = temp;
		
	}
	PC;
	cout << "开始展示结果" << endl;
	li;
	cout << "进行了" << jiao << "次数字比较" << endl;
	cout << "平均时间复杂度O(n*n),简单时间复杂度O(n),复杂时间复杂度O(n*n)，空间复杂度O(1),稳定的排序方法" << endl;
	li;
	show();
}

void Charu::sortlistDown()
{
	cout << "开始直接插入排序降序" << endl;
	int temp = 0;
	int i = 0;
	int j=0;
	int jiao = 0;
	for (i = 1; i < count; i++)
	{
		temp = listnum[i].num;
		
		for (j = i - 1; j >= 0 && listnum[j].num < temp; --j)
		{
			listnum[j + 1].num = listnum[j].num;
			jiao++;
			cout << "开始展示第" << jiao << "趟过程" << endl;
			show();
		}
		listnum[j+1].num = temp;
	}
	PC;
	cout << "开始展示结果" << endl;
	li;
	cout << "进行了" << jiao << "次数字比较" << endl;
	cout << "平均时间复杂度O(n*n),简单时间复杂度O(n),复杂时间复杂度O(n*n)，空间复杂度O(1),稳定的排序方法" << endl;
	li;
	show();
}

void Charu::sort()
{
	while (1)
	{
		PC;
		cout << "升序排列 请输入 0 " << endl << "降序排列 请输入 1 " << endl;
		int num = -1;
		num = isfalse();
		if (num == 0) {
			sortlistUp();
			PC;
			break;
		}
		else if (num == 1)
		{

			sortlistDown();
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
