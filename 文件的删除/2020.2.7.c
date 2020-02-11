#include<stdio.h>
int main() {
	//char name[20];
	//scanf("%s",name);
	printf("%d\n", remove("X:\\C语言文件实验\\该被删除.txt"));
	if (remove("X:\\C语言文件实验\\该被删除.txt") ) {//运行成功返回0

		printf("删除失败");//失败返回-1
	}
	else
	{
		printf("删除成功");
	}


	return 0;
}