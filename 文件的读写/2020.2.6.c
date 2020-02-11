#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE* fp=fopen("X:\\C语言文件实验\\读写.txt","w");//fopen(file)成功返回指向指针
	printf("%p",fp);//地址数
	if (fp==NULL) {//失败返回NULL
		printf("打开失败\n");
		exit(1);
	}
	else
	{
		printf("打开成功\n");
	}

	int n = 5;
	//printf("%d", fprintf(fp, "%d\n", n));
	if (fprintf(fp, "%d\n", n)!=-1) {//成功是返回  写入字符数量  
		printf("写入正确\n");//2位数 显示字符数量为 3
	}
	else
	{
		printf("写入错误\n");//错误  返回  负值
	}

	//n = 0;

	//if (fscanf(fp, "%d", &n)==1)//成功返回读取的 数量
	//{
	//	printf("读取成功\n");
	//}
	//else
	//{
	//	printf("读取失败\n");//失败返回-1
	//}

	printf("%d\n",n);

	if (fclose(fp))
	{
		printf("关闭文件失败");//失败返回-1
		exit(EOF);
	}
	else
	{
		printf("关闭文件成功\n");//成功返回0
	}
	
	
	return 0;
}