#include<stdio.h>
int main() {


	FILE* fp = NULL;
	fp = fopen("X:\\我的应用.txt","r+");//注意 路径为 X:\filename.后缀
	if (NULL == fp) {//       想要表达   \  需再用 \ 转义字符 使电脑明白    \\ 
		printf("打开失败\n");//      绝对路径和相对路径
		exit(EOF);
	}//                              绝对路径      需加盘符  C:\\  X:\\    
	else//                           相对路径      程序只在 项目文件夹中找
	{
		printf("打开成功\n");//fp==NULL(空)失败
	}


	if (fclose(fp)) {//        关闭成功返回 0
		printf("FILE close error!\n");
		exit(EOF);
	}
	else
	{
		printf("关闭成功\n");
	}
	return 0;
}