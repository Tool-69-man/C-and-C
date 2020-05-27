#include "Maop.h"

void Maop::sortlistUp()
{
	cout << "开始升序的冒泡排列" << endl;
	int i = 0;
	int j = 0;
	int jiao = 0;
	int ccc = 0;
	for (i = 0; i < count-1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (listnum[j].num > listnum[j + 1].num) {
				int temp = 0;
				temp = listnum[j + 1].num;
				listnum[j + 1].num = listnum[j].num;
				listnum[j].num = temp;
				show();
				jiao++;
			}
			ccc++;
		}
	}
	PC;
	cout << "开始展示结果" << endl;
	li;
	cout << "进行了" << jiao << "次数字交换" << endl;
	cout << "进行了" << ccc << "次数字比较" << endl;
	cout << "平均时间复杂度O(n*n),简单时间复杂度O(n),复杂时间复杂度O(n*n)，空间复杂度O(1),稳定的排序方法" << endl;
	li;
	show();

	PC;
}

void Maop::sortlistDown()
{
	cout << "开始降序的冒泡排列" << endl;
	int i = 0;
	int j = 0;
	int ccc = 0;
	int jiao = 0;
	for (i = 0; i < count-1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (listnum[j].num < listnum[j + 1].num) {
				int temp = 0;
				temp = listnum[j + 1].num;
				listnum[j + 1].num = listnum[j].num;
				listnum[j].num = temp;
				show();
				jiao++;
			}
			ccc++;
		}
	}
	li;
	cout << "进行了" << jiao << "次数字交换" << endl;
	cout << "进行了" << ccc << "次数字比较" << endl;
	cout << "平均时间复杂度O(n*n),简单时间复杂度O(n),复杂时间复杂度O(n*n)，空间复杂度O(1),稳定的排序方法" << endl;
	li;
	show();
}

void Maop::sort() {
	while (1)
	{
		PC;
		cout << "升序排列 请输入 0 " << endl << "降序排列 请输入 1 " << endl;
		int num = -1;
		num = isfalse();
		if (num==0) {
			sortlistUp();
			PC;
			break;
		}
		else if(num==1)
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
