#include<stdio.h>
void fun(int mood) {
	if (mood<50)
	{
		printf("guang");
	}
	else if (mood<60) {
		printf("chi fan");
	}
	else {
		printf("...");
	}

}

int main() {
	
	fun(80);
	return 0;
}