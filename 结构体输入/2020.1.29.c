#include<stdio.h>
int main() {
	struct myxx
	{
		char name[20];
		int num;
		float score;

	}yy;
	printf("������%d����\n",sizeof(yy.name)/sizeof(char));
	scanf("%s %d %f",yy.name,&yy.num,&yy.score);//ֻ������9�����֣���������
	printf("%s %d %f",yy.name,yy.num,yy.score);



	return 0;
}