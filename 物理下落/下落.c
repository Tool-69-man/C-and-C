#include<stdio.h>
int main() {
	int times=0;
	float height = 100.00;
	/*while (height>0.000001) {
		height /= 2;
		times++;
	}
	printf("弹%d次",times);*/
	for ( times = 0; times <5; times++)
	{
		height /= 2;
	}
	printf("第%d次高度%f", times, height);
	return 0;
}