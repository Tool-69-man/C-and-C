#include<stdio.h>
int main() {
	struct myxx
	{
		char name[20];
		int num;
		float score;

	}yy;
	printf("请输入%d个字\n",sizeof(yy.name)/sizeof(char));
	scanf("%s %d %f",yy.name,&yy.num,&yy.score);//只能容纳9个文字？？？？？
	printf("%s %d %f",yy.name,yy.num,yy.score);



	return 0;
}