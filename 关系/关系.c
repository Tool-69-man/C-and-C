#include <stdio.h>
int main() {
	//printf("%d\n",4==5 );
	//printf("%d\n",4!=3);
	//printf("%d\n", 8 >= 0);
	//printf("%d\n", 2 <= 3);
	//printf("%d\n", 4 < 3);
	//printf("%d\n", 4 > 3);
	//printf("%d\n", 4 == 4 && 9 > 2);
	//printf("%d\n", 4 == 4 || 9 < 2);
	//printf("%d\n", 4 == 4 && 9 < 2);
	//printf("%d\n", 4 != 4 && 9 > 2);
	//printf("%d\n", 4 != 4 || 9  > 2);
	//printf("%d\n", 4 != 4 && 9 < 2);
	//
	//printf("%d\n", 4 == 4 && 9 > 2);
	//printf("%d\n", 4 == 4 && 9 > 2); 
	//printf("%d\n", 4 == 4 && 9 > 2);
	//printf("%d", !3>2);//!3=0
	//printf("%d\n", !9 < 2);//
	int x=99;
	printf("%d\n",!0||x++ );//1
	printf("%d\n", x);//99
	x = 99;
	printf("%d\n",!1||x++ );//1
	printf("%d\n", x);//x =100
	x = 99;
	printf("%d\n",!0&&x++ );//1
	printf("%d\n", x);//x=100
	x = 99;
	printf("%d\n",!1&&x++ );//0
	printf("%d\n", x);//99
	//计算机真是合理，，，只要判断出结果，连命令都跳。
	return 0;
}