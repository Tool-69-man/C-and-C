#include<stdio.h>
int main() {
	int i,j;
	int n;
	int* p;
	int m[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	n = sizeof(m) / sizeof(int);
	//for (j = 0; j < 3;j++) {
	//	for (i = 0; i < 5; i++)
	//	{
	//		//printf("%2d%c", m[j][i], (i!=4)? ' ' : '\n');
	//		//printf("%2d%c", m[j][i], (n/5==0)? ' ' : '\n');     n==15
	//		printf("%2d ", m[j][i]);
	//		
	//	}
	//	printf("\n");
	//}
	for (p=&m[0][0]; p < &m[0][0]+n; p++)
	{
		printf("%d ",*p);
	}

	return 0;
}