#include<stdio.h>
int main() {
	struct bs {
		unsigned a : 1;
		unsigned b : 8;
		int c : 7;
	}FFF;
	FFF.a = 1;
	FFF.b = 23;
	FFF.c = 23;
	printf("%d %d %d",FFF.a,FFF.b,FFF.c);
	return 0;
}