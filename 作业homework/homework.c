#include <stdio.h>
#include<math.h>
void homework01(int age);
void homework02(int day);
void homework03(int month);
void homework04(int x);

int main() {
	int age,day,month,x;
	printf("����������\n");
	scanf("%d", &age);
	getchar();
	printf("������ĳ����\n");
	scanf("%d", &day);
	getchar();
	printf("�������·�\n");
	scanf("%d", &month);
	getchar();
	printf("���������\n");
	scanf("%d",&x);
	homework01(age);
	homework02(day);
	homework03(month);
	homework04(x);
	return 0;
}

void homework01(int age) {
	if (age >= 18) {
		printf("%d���ǳ�����\n",age);
	}
	else
	{
		printf("%d����δ������\n",age);
	}

}void homework02(int day) {
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("����%d�ǹ�����\n",day);
		break;
	case 6:
	case 7:
		printf("����%d����Ϣ��\n",day);
		break;

	default:
		printf("�����������\n");
		break;
	}
}

void homework03(int month) {
	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("%d���Ǵ���\n",month);
		break;
	case 6:
	case 7:
	case 8:
		printf("%d��������\n", month);
		break;
	case 9:
	case 10:
	case 11:
		printf("%d��������\n", month);
		break;
	case 12:
	case 1:
	case 2:
		printf("%d���Ƕ���\n", month);
		break;
	default:
		printf("error\n");
	}
}

void homework04(int x) {
	if (x >= 25) {
		printf("x/3+x/2���Ϊ%d\n",x/3+x/2 );
	}
	else if(x>=0&&x<25)
	{
		printf("x*x���Ϊ%d\n", pow(x, 2));
	}
	else {
		printf("-x���Ϊ%d\n", -x);
	}
}