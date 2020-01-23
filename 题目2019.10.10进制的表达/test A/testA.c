#include <stdio.h>
main()//int 没加，函数未声明仍运行
{
	int x = 0x13;
	printf("%d\n", x + 1);
	return 0;//不知道是否有必要加
}
