#include<stdio.h>
int add(float q, float a, float z);
int main() {
	float q, a, z;
	int G;
	printf("请输入3个数：");
	
	scanf("%f %f %f",&q,&a,&z);
	
	G=add(q,a,z);
	if (G==1) {
		printf("三角形");
	}
	else
	{
		printf("非三角形");
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