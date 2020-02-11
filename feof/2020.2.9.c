#include<stdio.h>
#include<stdlib.h>
int main() {
	//打开文件
	FILE* fp = fopen("X:\\C语言文件实验\\feof的使用.txt","r");
	if (fp!=NULL)
	{
		printf("打开成功\n");
	}
	int num = 0;
	int a[100];
	int i= 0;
	//while循环 读取  中  
	//用feof判断   当指针指向最后时 返回非0  break;
	while (1)
	{
		if (feof(fp)!=0) {
			//printf("%d\n", feof(fp));//feof   结尾返回值为 1    正常返回为  0
			break;//最后存在     一个字符   未读取 成功
		}//但是  仍然printf     所以需做个 读取成功才输出的判断
		
		if (1==fscanf(fp, "%d", &a)) {
			printf("%d\n", a[i]);//   应输出为100    为什么是1001 
			i++;//因为    第18行  printf最后打印 feof(fp)返回值 1
		}
	}

	/*if (fscanf(fp, "%d", &num) == 1) {
		printf("返回值读取成功\n");
	}
	else
	{
		printf("返回值读取失败\n");
	}
	printf("%d",num);*/
	
	
	//关闭文件
	fclose(fp);
	return 0;
}