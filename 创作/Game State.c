#include <stdio.h>
int main() {
	printf("����DΪ����CΪè��RΪ���ӣ�SΪ�ߣ�LΪ���棻\n\n2���Ա�MΪ����FΪĸ��\n\n3���Ƿ��ʺ���Ϊ�����1 - 10��ţ�1��ʾ�������10��ʾ������\n\n");
	char kind;
	char D, C, R, S, L;
	D = 'D', C = 'C', R = 'R', S = 'S', L = 'L';
	//D = 1, C = 2, R = 3, S = 4, L = 5;//���ܸ�ֵ�����Ӧ�ø�ֵ��ĸ
	char sex;
	char M, F;
	M = 'M', F = 'F';
	//M = 6, F = 7;
	char difficulty;
	char weight;
	int a, b, c, d, e, f, g, h, j, k;
	a = 1;
	b = 3;
	c = 3;
	d = 4;
	e = 5;
	f = 6;
	g = 7;
	h = 8;
	j = 9;
	k = 10;
	int m = 15;
	int n = 20; 
	int p = 25;
	int l = 30;
	int q = 35; 
	int w = 40; 
	int  r = 45; 
	int  x = 50;
	int t = 55;
	int  v = 60;
	printf("�������������:");
	scanf("%c", &kind);
	getchar();
	printf("����������Ա�:");
	scanf("%c", &sex);

	if (kind == D && sex == M) {//����һ��ʼ�����壬'D'

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", a, m);
	}
	
	 else if (kind == D && sex == F) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", b, n);
	}
	
	else if (kind == C && sex == M) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", c, p);
	}
	
	else if (kind == C && sex == F) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", d,l );
	}
	
	else if (kind == R  && sex == M) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", e,q );
	}
	
	else if (kind == R&& sex == F) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", f,w );
	}
	
	else if (kind == S && sex == M) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", g, r);
	}
	
	else if (kind == S && sex == F) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n",f, x);
	}
	
	else if (kind == L && sex == M) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", j, t);
	}
	
	else if (kind == L && sex == F) {

		printf("������Ѷ�ϵ����%d\n��������أ�%dkg\n", k,v );
	}
	else {
		printf("�������\n");
	}
	return 0;
}