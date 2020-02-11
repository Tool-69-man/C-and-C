#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	char str;
	FILE* fp=fopen("X:\\C语言文件实验\\读写单字符.txt" ,"w") ;
	//打开文件  fputc  只写方式
	if (fp!=NULL) {
		printf("打开成功\n");
	}

	for (i = 0; i < 10;i++) {
		//str = getchar();//getchar()  相当于    fgetc(stdin)
		str=fgetc(stdin);
		fputc(str,fp);
	}



	//关闭文件
	fclose(fp);


	//关闭文件   fp   不为  NULL
	//打开文件 fgetc   只读
	fp=fopen("X:\\C语言文件实验\\读写单字符.txt","r");//重新赋值
	if (fp != NULL) {
		printf("打开成功\n");
	}


	for (i = 0; i < 10; i++) {
		
		str=fgetc(fp);
		//putchar(str);//putchar()  相相当fputc(str,stdout)
		fputc(str, stdout);
	}


	//关闭文件  
	fclose(fp);

	return 0;
}