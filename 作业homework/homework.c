#include <stdio.h>
#include<math.h>
void homework01(int age);
void homework02(int day);
void homework03(int month);
void homework04(int x);

int main() {
	int age,day,month,x;
	printf("请输入年龄\n");
	scanf("%d", &age);
	getchar();
	printf("请输入某星期\n");
	scanf("%d", &day);
	getchar();
	printf("请输入月份\n");
	scanf("%d", &month);
	getchar();
	printf("请输入参数\n");
	scanf("%d",&x);
	homework01(age);
	homework02(day);
	homework03(month);
	homework04(x);
	return 0;
}

void homework01(int age) {
	if (age >= 18) {
		printf("%d岁是成年人\n",age);
	}
	else
	{
		printf("%d岁是未成年人\n",age);
	}

}void homework02(int day) {
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("星期%d是工作日\n",day);
		break;
	case 6:
	case 7:
		printf("星期%d是休息日\n",day);
		break;

	default:
		printf("星期输入错误\n");
		break;
	}
}

void homework03(int month) {
	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("%d月是春天\n",month);
		break;
	case 6:
	case 7:
	case 8:
		printf("%d月是夏天\n", month);
		break;
	case 9:
	case 10:
	case 11:
		printf("%d月是秋天\n", month);
		break;
	case 12:
	case 1:
	case 2:
		printf("%d月是冬天\n", month);
		break;
	default:
		printf("error\n");
	}
}

void homework04(int x) {
	if (x >= 25) {
		printf("x/3+x/2结果为%d\n",x/3+x/2 );
	}
	else if(x>=0&&x<25)
	{
		printf("x*x结果为%d\n", pow(x, 2));
	}
	else {
		printf("-x结果为%d\n", -x);
	}
}