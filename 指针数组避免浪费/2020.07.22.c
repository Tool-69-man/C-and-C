#include<stdio.h>

//ָ������洢�Ͷ�ά����洢

int main() {
	char a[4][20] = { "L.L.&&C.C.","ʿ����ʮ��","�涷������","����������" };
	char *b[4] = { "L.L.&&C.C.","ʿ����ʮ��","�涷������","����������" };
	printf("��ά�洢================\n");
	printf("�ܴ洢��%d\n", sizeof(a));
	printf("a[1]=%s   %d\n ",a[0],sizeof(a[0]));
	printf("a[2]=%s   %d\n ", a[1], sizeof(a[1]));
	printf("a[3]=%s   %d\n ", a[2], sizeof(a[2]));
	printf("a[4]=%s   %d\n ", a[3], sizeof(a[3]));
	printf("ָ��洢================\n");
	printf("�ܴ洢��%d\n", sizeof(b));
	printf("b[1]=%s   %d\n ",b[0],sizeof(b[0]));
	printf("b[2]=%s   %d\n ", b[1], sizeof(b[1]));
	printf("b[3]=%s   %d\n ", b[2], sizeof(b[2]));
	printf("b[4]=%s   %d\n ", b[3], sizeof(b[3]));

	return 0;
}