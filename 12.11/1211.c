#include<stdio.h>
int main() {
	int i = 0;
	int sum = 0;
loop:if (i < 100) {//loop:
	sum += i;
	i++;
	printf("    %d",sum);
	if (i % 10 == 0) {
		printf("\n");
	}
	goto loop;//goto无条件跳转
	printf("    %d", sum);
	if (i % 10 == 0) {
		printf("\n");
	}

	}
//printf("%d", sum);

	return 0;
}