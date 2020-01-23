#include <stdio.h>
int main() {
	int x = 10.0;
	//int y;
	//y=(float)x;//？？？
	/*float y = x;*/
	char L = 'm';
	printf("%c",L);
	printf("\n");
	printf("x=%f\n", x);//
	/*printf("y=%f\n", y);*///为什么《第5行》类型转换不行？？
	return 0;		//因为 y 是int 型的（float）x 是改变 x 的类型
	//int 型的 y  %f 输出为0.000000
	//我用 x 做的实验


}