#include <stdio.h>
int main() {
	printf("种类D为狗，C为猫，R为兔子，S为蛇，L为蜥蜴；\n\n2、性别M为公，F为母；\n\n3、是否适合作为宠物，从1 - 10标号，1表示最好养，10表示最难养\n\n");
	char kind;
	char D, C, R, S, L;
	D = 'D', C = 'C', R = 'R', S = 'S', L = 'L';
	//D = 1, C = 2, R = 3, S = 4, L = 5;//不能赋值这个，应该赋值字母
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
	printf("请输入宠物种类:");
	scanf("%c", &kind);
	getchar();
	printf("请输入宠物性别:");
	scanf("%c", &sex);

	if (kind == D && sex == M) {//可以一开始不定义，'D'

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", a, m);
	}
	
	 else if (kind == D && sex == F) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", b, n);
	}
	
	else if (kind == C && sex == M) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", c, p);
	}
	
	else if (kind == C && sex == F) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", d,l );
	}
	
	else if (kind == R  && sex == M) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", e,q );
	}
	
	else if (kind == R&& sex == F) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", f,w );
	}
	
	else if (kind == S && sex == M) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", g, r);
	}
	
	else if (kind == S && sex == F) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n",f, x);
	}
	
	else if (kind == L && sex == M) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", j, t);
	}
	
	else if (kind == L && sex == F) {

		printf("宠物的难度系数：%d\n宠物的体重：%dkg\n", k,v );
	}
	else {
		printf("输入错误\n");
	}
	return 0;
}