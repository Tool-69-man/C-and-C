//纸牌游戏 - 小猫钓鱼  
//两人有相同手牌  从手中第一张交替出牌放置在桌上
//如果某人打出牌与桌面上牌相同
//可将两张相同牌之间的牌依次收走，放入末尾
//手牌出完时，失败

//玩家 a,b 手牌是队列
//桌面  z   是栈

//流程
//输入玩家手中牌    每人6张
//牌面	1~9
//a先出牌（出队，入栈） 
//判断是否有相同的牌    这里用简单的桶排序
// 赢牌：收牌继续（出栈，入队）
// 没赢：没输继续；输了结束。
//b 同理
//如果游戏一直进行  怎么办 

#include<stdio.h>
#include<string.h>

struct quque//玩家
{
	int data[100];
	int head;
	int tail;
};

struct stack
{
	int nun[10];
	int top;
};
int main() {
	struct quque a, b;
	struct stack z;
	a.head = 1;
	b.head = 1;
	a.tail = 1;
	b.tail = 1;
	int book[10] = {0};
	z.top = 0;
	int i = 0;
	int j = 0;
	int t = 0;

	//输入玩家手牌
	for ( i = 1; i <= 6; i++)
	{
		printf("输入a玩家手牌:");
		scanf("%d",&a.data[a.tail]);
		a.tail++;
	}
	printf("\n=========================\n");
	for ( j = 1; j <= 6; j++)
	{
		printf("输入b玩家手牌:");
		scanf("%d",&b.data[b.tail]);
		b.tail++;
	}
	//head=1  tail=7  手牌6张
	//当head=tail手牌为空,游戏结束
	while (a.head<a.tail&&b.head<b.tail)
	{
		//出队
		t = a.data[a.head];
		a.head++;
		if (book[t]==0)//没赢
		{
			

			z.top++;//入栈
			z.nun[z.top] = t;
			book[t] = 1;
		}
		else//赢了
		{
			a.data[a.tail] = t;
			a.tail++;
			while( t!=z.nun[z.top])
			{
				book[z.nun[z.top]] = 0;
				a.data[a.tail] = z.nun[z.top];
				a.tail++;
				z.top--;
			}
			book[z.nun[z.top]] = 0;//回收牌面为t
			a.data[a.tail] = z.nun[z.top];
			a.tail++;
			z.top--;

		}
		if (a.head==a.tail)
		{
			printf("a手牌为0,游戏结束\n");
			break;
		}

		t = b.data[b.head];
		b.head++;
		if (book[t]==0)
		{
			book[t] = 1;
			z.top++;
			z.nun[z.top] = t;
			
		}
		else
		{
			b.data[b.tail] = t;
			b.tail++;
			while (t!=z.nun[z.top])
			{
				b.data[b.tail] = z.nun[z.top];
				b.tail++;
				book[z.nun[z.top]] = 0;
				z.top--;
				
			}
			b.data[b.tail] = z.nun[z.top];
			b.tail++;
			book[z.nun[z.top]] = 0;
			z.top--;
		}
	}//如果b玩家打完牌  会结束循环

	if (b.head==b.tail)
	{
		printf("a玩家胜利\n");
		printf("a玩家手牌展示:");
			for ( i = a.head; i < a.tail; i++)
			{
				printf(" %d, ",a.data[i]);
			}
			if (z.top>0)
			{
				printf("\n桌面剩余是：\n");
				for ( i = 1; i <= z.top; i++)
				{
					printf(" %d,",z.nun[i]);
				}
			}
			else
			{
				printf("桌面没牌了\n");
			}
	}
	else
	{
		printf("b玩家胜利\n");
		printf("b玩家手牌展示:");
		for (i = b.head; i < b.tail; i++)
		{
			printf(" %d, ", b.data[i]);
		}
		if (z.top > 0)
		{
			printf("\n桌面剩余是：\n");
			for (i = 1; i <= z.top; i++)
			{
				printf(" %d,", z.nun[i]);
			}
		}
		else
		{
			printf("桌面没牌了\n");
		}
	}
	getchar();
	getchar();
	return 0;
}