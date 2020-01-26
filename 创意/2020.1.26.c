#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	
	
	//
	while (1)
	{
		srand(time(0));
		int i = rand() % 11;//乱序版（完全看不清）
		switch (i)
		{
		case 1:
			printf(".........................\n");
			break;
		case 2:
			printf("我是分界线\n");
			break;
		case 3:
			printf("你在干什么？？？？？？\n");
			break;
		case 4:
			printf("这都不知道！！！！！！\n");
			break;
		case 5:
			printf("这过程不都摆在你面前！！\n");
			break;
		case 6:
			printf("不懂才问 ,是不是sb?\n");
			break;
		case 7:
			printf("我草泥马\n");
			break;
		case 8:
			printf("所以你到底在干什么？？？？？\n");
			break;
		case 9:
			printf("我也不知道，我在干嘛，\n");
			break;
		case 10:
			printf("不过我也编完了\n");
			break;
		default:
			printf("怎么会错\n");
			break;
		}


	}
	return 0;
}