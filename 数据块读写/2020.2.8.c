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
	fp = fopen("X:\\C�����ļ�ʵ��\\���ݿ��д.txt","wb");
	if (fp == NULL) {
		printf("��ʧ��\n");
		exit(EOF);
	}
	else
	{
		printf("�򿪳ɹ�\n");
		students s[20] = { { "�涷",12,"��",16 },{"³³��",69,"��",18},
		{"���ʿ��",10,"��",17},{"��",34,"��",19} };

		int i = 0;
		/*for (i; i < 20; i++) {
			fwrite(&s[i], sizeof(students), 1, fp);//960�ֽ�
		}*/
		//fwrite(s, sizeof(students), 20, fp);//960�ֽ�
		fwrite(s, sizeof(students), 1, fp);//48�ֽ�
		fclose(fp);

		fopen("X:\\C�����ļ�ʵ��\\���ݿ��д.txt", "rb");
		s[0].id = 0;//��ֵ�Ķ� ��֤�Ƿ��ȡ��ȷ
		
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