#include<stdio.h>
#include<string.h>
int main() {
	//struct good2
	//{
	//	char name[10];//数组才行，还能输入文字
	//	float price;
	//	int amount;
	//	float pay;
	//}myGoods = {"魔王LL",71,12,69};
	////printf("%s,%f,%d,%f",myGoods);//无法显示  错误返回
	////printf("%d",myGoods);//显示-85....
	//printf("%s\n%f\n%d\n%f\n",myGoods.name,myGoods.price,myGoods.amount,myGoods.pay);

	struct  goods2
	{
		char name[10];
		float price;
		int amount;
		float pay;
	}goods2 = {"魔女CC",31,51,66};
	printf("%s\n%f\n%d\n%f\n",goods2.name, goods2.price, goods2.amount, goods2.pay);

	struct  goods3
	{
		char name[20];
		float price;
		int amount;
		float pay;
	}mood = { "我 伤害 爆炸" };
	struct goods3 poiu = { "阿斯顿" }, boy1 = {"sadsadasd"};
	mood.price = 999;
	mood.amount = 1000;
	mood.pay = 1999;
	printf("%s\n%f\n%d\n%f\n", mood.name, mood.price, mood.amount, mood.pay);
	printf("%s\n", poiu.name);
	printf("%s\n", boy1.name);

	
}