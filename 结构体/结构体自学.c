#include<stdio.h>
int main() {
	//struct goods
	//{
	//	char name[10];//������У�������������
	//	float price;
	//	int amount;
	//	float pay;
	//}myGoods = {"ħ��LL",71,12,69};
	////printf("%s,%f,%d,%f",myGoods);//�޷���ʾ  ���󷵻�
	////printf("%d",myGoods);//��ʾ-85....
	//printf("%s\n%f\n%d\n%f\n",myGoods.name,myGoods.price,myGoods.amount,myGoods.pay);

	/*struct  goods2
	{
		char name[10];
		float price;
		int amount;
		float pay;
	}goods2 = {"ħŮCC",31,51,66};
	printf("%s\n%f\n%d\n%f\n",goods2.name, goods2.price, goods2.amount, goods2.pay);*/

	struct  goods2
	{
		char name[10];
		float price;
		int amount;
		float pay;
	}goods2 = { "ħŮCC",31,51,66 };
	printf("%s\n%f\n%d\n%f\n", goods2.name, goods2.price, goods2.amount, goods2.pay);

	struct  goods3
	{
		char name[10];
		float price;
		int amount;
		float pay;
		goods2;
	}goods3 = { "ħŮCC",31,51,66 };
	printf("%s\n%f\n%d\n%f\n", goods2.name, goods2.price, goods2.amount, goods2.pay);
	return 0;
}