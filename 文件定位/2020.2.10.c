#include<stdio.h>
#include<stdlib.h>
int main() {
	//打开文件
	FILE* fp = fopen("X:\\C语言文件实验\\定位操作.txt", "r");
	if (fp != NULL) {
		printf("打开成功\n");
	}
	int n;
	
	//获取函数    ftell
	printf("%d\n",ftell(fp));
	fscanf(fp,"%d",&n);//    读取后指针  移动到最后
	printf("%d\n",n);
	//设置函数    fseek
	fseek(fp,3,SEEK_SET);//  从文件开头 一定
	printf("%d\n", ftell(fp));
	fscanf(fp, "%d", &n);
	printf("%d\n", n);

	//因为已读取    此时位置为结尾
	fseek(fp, -3, SEEK_CUR);//可以有负数
	printf("%d\n", ftell(fp));
	fscanf(fp, "%d", &n);
	printf("%d\n", n);

	//读写指针   复位函数   rewind
	rewind(fp);//读取一边后   及时   复位

	fseek(fp, 7, SEEK_CUR);
	printf("%d\n", ftell(fp));
	fscanf(fp, "%d", &n);
	printf("%d\n", n);

	fclose(fp);
	//关闭文件
	return 0;
}