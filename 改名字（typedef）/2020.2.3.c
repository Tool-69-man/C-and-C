#include<stdio.h>
int main() {
	//typedef int  ³³;//typedef �ܻ������ģ�
	//³³ a = 3;
	//printf("%d\n", a);
	//
	//³³ b[3] = {1,10,20};
	//printf("%d %d %d\n", b[0], b[0] + 1, b[0] + 2);

	//³³ *x[3] = {1,10,20};
	//printf("%d %d %d\n", *b, *(b + 1), *b + 2);// 1    10    3
	

	typedef int name[3];
	int i;
	//name s1 = {1,2,3};//��Ч int s1[3]
	//int s2[3] = { 1,2,3 };
	//for ( i = 0; i < 3; i++)
	//{
	//	printf("%d\t",s1[i]);
	//	printf("%d\n",s2[i]);
	//}



	//name s2;
	//printf("%d",sizeof(s2)/sizeof(int));// ����s2 ����Ϊ  3



	//name s2[4] = {30,31,32,33};//name[3]  Ӧ�ö���s2[3] ���Խ� s2[3]��Ϊs2[4]
	//for (i = 0; i < 4; i++)//ֻ�� ��Ϊ  *s2[4]���������ֵ
	//	{
	//		
	//		printf("%d\n",s2[i]);//���������Ϊ��ַ
	//	}
	return 0;
}