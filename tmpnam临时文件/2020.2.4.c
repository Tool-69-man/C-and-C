#include<stdio.h>
int main() {
	FILE* fp;
	/*if ((fp = tmpfile()) == NULL) {
		printf("creat temp file failed!");
		exit(EOF);
	}//                                            创建成功
*/        

	char ch, * fn, str[255];
	fn = tmpnam(str);
	printf("%s\n",str);
	printf("%s\n",fn);

	//tmpfile()产生 的 临时文件名 与  tmpnam() 产生“临时文件” 不同
	// 区别  tmpnam  关闭（fclose）或程序结束时会 自动删除

	return 0;
}