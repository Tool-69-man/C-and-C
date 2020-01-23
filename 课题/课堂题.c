#include <stdio.h>
void getDay(int m);
int main() {

	int m;
	scanf("%d", &m);

	getDay(m);

	return 0;
}
void getDay(int m) {
	
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m ==12)
		//m=12时最左边m会显示错误为“表达式必需是可修改的左值
	{
		printf("day=31");
	}
	else if (m == 2)
	{
		printf("day=28");
	}
	else if (m == 4 || m== 6 || m == 9 || m == 11)
	{
		printf("day=30");
	}


}
/*
int num1;
printf("请输入非0整数");
scanf("%d",&num1);
if (num1 > 0) {
printf("正整数\n");
}
else {
printf("负\n");
}*/

/*int num2;
scanf("%d",&num2);
if (num2 % 2 != 0) {
printf("奇数");
}*/

/*char a, A;
a = 'a';
A = 'A';
printf("%d",A-a);-32*/
/*char kind;
char A, Z, a, z;
A = 'A';
Z = 'Z';
a = 'a';
z = 'z';
scanf("%c", &kind);
if (kind<=Z&&kind>=A) {
printf("%c", kind + 32);
}
else if (kind<=z&&kind>=a){
printf("%c", kind - 32);
}
else
{
printf("错误");
}*/