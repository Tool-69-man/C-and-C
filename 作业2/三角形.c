#include<stdio.h>
int add(float q, float a, float z);
int main() {
	float q, a, z;
	int G;
	printf("������3������");
	
	scanf("%f %f %f",&q,&a,&z);
	
	G=add(q,a,z);
	if (G==1) {
		printf("������");
	}
	else
	{
		printf("��������");
	}

	
	return 0;
}
int add(float q, float a, float z) {
	int w, s, x, e, d, c;
	w = q + a > z;
	s = q + z > a;
	x = a + z > q;
	e = q - a < z;
	d = q - z < a;
	c = a - z < q;
	
	printf("%d",w && s && x && e && d && c);
	
	
	
}