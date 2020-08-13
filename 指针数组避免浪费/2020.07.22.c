#include<stdio.h>

//指针数组存储和二维数组存储

int main() {
	char a[4][20] = { "L.L.&&C.C.","士道与十香","梨斗和梦梦","艾伦与三笠" };
	char *b[4] = { "L.L.&&C.C.","士道与十香","梨斗和梦梦","艾伦与三笠" };
	printf("二维存储================\n");
	printf("总存储：%d\n", sizeof(a));
	printf("a[1]=%s   %d\n ",a[0],sizeof(a[0]));
	printf("a[2]=%s   %d\n ", a[1], sizeof(a[1]));
	printf("a[3]=%s   %d\n ", a[2], sizeof(a[2]));
	printf("a[4]=%s   %d\n ", a[3], sizeof(a[3]));
	printf("指针存储================\n");
	printf("总存储：%d\n", sizeof(b));
	printf("b[1]=%s   %d\n ",b[0],sizeof(b[0]));
	printf("b[2]=%s   %d\n ", b[1], sizeof(b[1]));
	printf("b[3]=%s   %d\n ", b[2], sizeof(b[2]));
	printf("b[4]=%s   %d\n ", b[3], sizeof(b[3]));

	return 0;
}