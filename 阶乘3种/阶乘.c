#include<stdio.h>//12�Ľ׳˴���ȷ
int aaa(int x);//13�Ľ׳�������10λ���������ȫ����
int bbb(int x);//��ʼ���Կ�ѧ��������ʧ�ܡ�
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
			printf("%e\n", (float)aaa(x));//��ѧ��������Ҫ��������ת��
			printf("%e\n", (float)bbb(x));//���Ͳ�ת�������쳣���֣�����������ʱ��ͬ��ͬ
			printf("%e\n", (float)ccc(x));


		}
		else {

			printf("�������\n");
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