#include <stdio.h>
#include<math.h>//֮ǰû����ѧͷ�ļ���2019.12.28��
int main() {
	float PI = 3.14;//������⻻��int PI�ͱ�3�ˡ�����
	int r,R;
	r = 2; R = 3;
	float S = PI * pow(r, 2);//������r����ֵ�޹أ�S��s��ֵ��ͬ
    float L = PI * r * r;//��S��L��Ϊint��Lδ�ı䣬M��S�ı�
	float s=PI* pow(R, 2);
	float M = PI * R * R;
	printf("S=%f\n,L=%f\n,s=%f\n,M=%f", S, L, s, M);
	return 0;
}