#include<stdio.h>
#include<math.h>
#define  MIN 1e-6
int main() {
	
	/*while (1) {
		float a;
		scanf_s("%f", &a);//�ǵ���f
		printf("%f\n", a);//����floatȡ������
		//ֱ�ӱȽϸ����� a==0�����������ͱȽϲ���ȫ    �ȶ��弫С��ֵpow(10,-6)
		//ŵҪ�Ƚ���������   a,b�Ƿ����   fabs(a-b)<MIN
	}*/
	float a, b, c, disc,p,q;
	printf("������3������\n");
	scanf("%f %f %f",&a,&b,&c);
	if (fabs(a)<=MIN)
	{
		printf("����һԪ���η���\n");
	}
	else
	{
		disc = b * b - 4 * a * c;
		p = -b / (2 * a);
		q = sqrt(disc) / (2*a);
		if (fabs(disc) <= MIN) {
			printf("��������ͬ��ͬ��ʵ��");
			printf("X1=X2=%2f\n",p);
		}
		else if(disc>MIN)
		{
			printf("��������ͬ��ʵ��");
			printf("X1=%.2f,X2=%0.2f",p+q,p-q);
		}
		else{
			printf("�����������");
			printf("X1=%f+%f*i,X2=%f-%f*i",p,q,p,q);
		}
	}
	return 0;
}