#include<stdio.h>
int main() {
	FILE* fp;

	if (fp = fopen("我的应用.txt", "r") == NULL) {//filename 文件名  mode打开方式
	
		printf("无法正常打开");
		exit(EOF);//退出为非零 停止执行  返回操作系统    EOF = -1

	};
	
	if (fclose(fp)) {//关闭fp 指向文件
		printf("File close error");
		exit(1);
	}
	//   mode   打开方式
	//   ASCII文件 r,rt    二进制rb   可读。
	//   ASCII文件 w,wt    二进制wb   可写。文件不存在 则创建；已存在，则清空
	//   ASCII文件 a,at    二进制ab   添加。文件不存在 则创建；已存在，则从末端添加
	//   ASCII文件 r+,r+t,rt+    二进制rb+ ,r+b   可读写。
	//   ASCII文件 w+,w+t,wt+    二进制wb+,w+b   可读写。文件不存在 则创建；已存在，则清空
	//   ASCII文件 a+,a+t,at+    二进制a+b,ab+   可读与添加。文件不存在 则创建；已存在，则从末端添加





	return 0;
}