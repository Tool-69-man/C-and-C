#include "Xuanze.h"

void Xuanze::sortlistUp()
{
	cout << "开始选择排序升序" << endl;
	int i=0;
	int j=0;
	int jiao = 0;
	int ccc = 0;
	for ( i = 0; i < count; i++)
	{
		int min = i;
		for ( j = 0; j < count-i; j++)
		{
			if (listnum[min].num > listnum[j].num) {
				min = j;
			
			}
			ccc++;
		}
		int temp = listnum[min].num;
		listnum[min].num = listnum[i].num;
		listnum[i].num = temp;
		show();
		jiao++;
	}
	li;
	cout << "进行了" << jiao << "次数字交换" << endl;
	cout << "进行了" << ccc << "次数字比较" << endl;
	cout << "平均时间复杂度O(n*n),简单时间复杂度O(n*n),复杂时间复杂度O(n*n)，空间复杂度O(1),不稳定的排序方法" << endl;
	li;
	show();
}

void Xuanze::sortlistDown()
{
	cout << "开始选择排序降序" << endl;
	int i = 0;
	int j = 0;
	int jiao = 0;
	int ccc = 0;
	for (i = 0; i < count-1; i++)
	{
		int min = i;
		for (j = i+1; j < count ; j++)
		{
			if (listnum[min].num < listnum[j].num) {
				min = j;
				
			}
			ccc++;
		}
		int temp = listnum[min].num;
		listnum[min].num = listnum[i].num;
		listnum[i].num = temp;
		show();
		jiao++;
	}
	li;
	cout << "进行了" << jiao << "次数字交换" << endl;
	cout << "进行了" << ccc << "次数字比较" << endl;
	cout << "平均时间复杂度O(n*n),简单时间复杂度O(n*n),复杂时间复杂度O(n*n)，空间复杂度O(1),不稳定的排序方法" << endl;
	li;
	show();
}

void Xuanze::sort()
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


