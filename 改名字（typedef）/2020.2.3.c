#include<stdio.h>
int main() {
	//typedef int  鲁鲁;//typedef 能换成中文；
	//鲁鲁 a = 3;
	//printf("%d\n", a);
	//
	//鲁鲁 b[3] = {1,10,20};
	//printf("%d %d %d\n", b[0], b[0] + 1, b[0] + 2);

	//鲁鲁 *x[3] = {1,10,20};
	//printf("%d %d %d\n", *b, *(b + 1), *b + 2);// 1    10    3
	

	typedef int name[3];
	int i;
	//name s1 = {1,2,3};//等效 int s1[3]
	//int s2[3] = { 1,2,3 };
	//for ( i = 0; i < 3; i++)
	//{
	//	printf("%d\t",s1[i]);
	//	printf("%d\n",s2[i]);
	//}



	//name s2;
	//printf("%d",sizeof(s2)/sizeof(int));// 定义s2 长度为  3



	//name s2[4] = {30,31,32,33};//name[3]  应该定义s2[3] 尝试将 s2[3]改为s2[4]
	//for (i = 0; i < 4; i++)//只有 改为  *s2[4]才能输出数值
	//	{
	//		
	//		printf("%d\n",s2[i]);//？？？输出为地址
	//	}
	return 0;
}