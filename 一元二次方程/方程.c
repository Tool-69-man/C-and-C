#include<stdio.h>
#include<math.h>
#define  MIN 1e-6
int main() {
	
	/*while (1) {
		float a;
		scanf_s("%f", &a);//记得用f
		printf("%f\n", a);//测试float取舍问题
		//直接比较浮点型 a==0或两个浮点型比较不安全    先定义极小数值pow(10,-6)
		//诺要比较两浮点型   a,b是否相等   fabs(a-b)<MIN
	}*/
	float a, b, c, disc,p,q;
	printf("请输入3个数字\n");
	scanf("%f %f %f",&a,&b,&c);
	if (fabs(a)<=MIN)
	{
		printf("不是一元二次方程\n");
	}
	else
	{
		disc = b * b - 4 * a * c;
		p = -b / (2 * a);
		q = sqrt(disc) / (2*a);
		if (fabs(disc) <= MIN) {
			printf("有两个相同相同的实根");
			printf("X1=X2=%2f\n",p);
		}
		else if(disc>MIN)
		{
			printf("有两个不同的实根");
			printf("X1=%.2f,X2=%0.2f",p+q,p-q);
		}
		else{
			printf("有两个共轭复根");
			printf("X1=%f+%f*i,X2=%f-%f*i",p,q,p,q);
		}
	}
	return 0;
}