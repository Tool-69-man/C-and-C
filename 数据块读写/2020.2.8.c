#include<stdio.h>
#include<stdlib.h>
 typedef struct people
{  
	char  name[20];
	int id;
	char sex[20];
	int age;
}students;
int main() {
	FILE* fp;
	fp = fopen("X:\\C语言文件实验\\数据块读写.txt","wb");
	if (fp == NULL) {
		printf("打开失败\n");
		exit(EOF);
	}
	else
	{
		printf("打开成功\n");
		students s[20] = { { "梨斗",12,"男",16 },{"鲁鲁修",69,"男",18},
		{"五河士道",10,"男",17},{"月",34,"男",19} };

		int i = 0;
		/*for (i; i < 20; i++) {
			fwrite(&s[i], sizeof(students), 1, fp);//960字节
		}*/
		//fwrite(s, sizeof(students), 20, fp);//960字节
		fwrite(s, sizeof(students), 1, fp);//48字节
		fclose(fp);

		fopen("X:\\C语言文件实验\\数据块读写.txt", "rb");
		s[0].id = 0;//赋值改动 验证是否读取正确
		
			fread(s, sizeof(students), 1, fp);
			//fread(s, sizeof(students), 4, fp);
		for (i = 0; i < 20; i++)
		{
			if (s[i].id != 0) {
				printf("%10s%6d%6s%6d\n", s[i].name, s[i].id, s[i].sex, s[i].age);
			}
		}
	}
	fclose(fp);
	return 0;
}