#include<stdio.h>
int main() {
	int m[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	int *px[3];
	px[0] = m[0];
	px[1] = m[1];
	px[2] = m[2];
	printf("%d\n",m[2][2]);
	printf("%X\n",&m[2][2]);
	printf("%d\n",m[2][0]+2);
	printf("%X\n",m[2]+2);//m[2]=px[2]    *px
	printf("%d\n",*(m[2]+2));
	printf("%d\n",*(&m[2][0]+2));
	printf("%X\n", m[2] + 2);
	printf("%X\n",&m[2][0]+2);
	printf("%d\n",*(px[2]+2));
	printf("%d\n", *(*(px + 2) + 2));
	
	return 0;
}