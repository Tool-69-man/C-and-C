#include<stdio.h>
int main() {
	int times=0;
	float height = 100.00;
	/*while (height>0.000001) {
		height /= 2;
		times++;
	}
	printf("��%d��",times);*/
	for ( times = 0; times <5; times++)
	{
		height /= 2;
	}
	printf("��%d�θ߶�%f", times, height);
	return 0;
}