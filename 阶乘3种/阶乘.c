#include<stdio.h>//12的阶乘答案正确
int aaa(int x);//13的阶乘数超过10位数，结果完全错误
int bbb(int x);//开始尝试科学技术法《失败》
int ccc(int x);
int main() {
	int x;
	while (1)
	{
		scanf("%d", &x);
		if (x > 1) {
			aaa(x);
			bbb(x);
			ccc(x);
			printf("%e\n", (float)aaa(x));//科学计数法不要忘了类型转换
			printf("%e\n", (float)bbb(x));//类型不转换出现异常数字，并且数字有时相同或不同
			printf("%e\n", (float)ccc(x));


		}
		else {

			printf("输入错误\n");
		}
	}
	return 0;
}
int aaa(int x) {
	int result ,i;
	i = 1;
	result = 1;
	while (i<=x) {
		result *=i ;
		i++;

	}
	return result;
}
int bbb(int x) {
	int result, i;
	i = 1;
	result = 1;
	do  {
		result *= i;
		i++;

	} while (i <= x);
	return result;
}
int ccc(int x) {
	int result, i;
	i = 1;
	result = 1;
	for ( i = 1; i <= x; i++)
	{
		result *= i;
	}
	return result;
}