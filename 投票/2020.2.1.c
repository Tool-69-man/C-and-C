#include<stdio.h>
#include<string.h>
int main() {
	int i, j;
	struct male_lead
	{
		char name[20];
		int count;
	}symbolize[3] = {"鲁鲁修",0,"五河 士道",0,"梨斗",0};

	char name[20];

	for (j = 0; j < 10; j++)
	{
		scanf("%s",&name);//“五河 士道”  中有空格  scanf 不 行 选用gets
		//gets(name);
		for (i = 0; i < 3; i++)//    多重for循环   i  , j 区分 否则无限循环
		{
			if (strcmp(name, symbolize[i].name) == 0)
			{
				symbolize[i].count++;

			}
		}
	}
	for ( j = 0; j < 3; j++)
	{
		printf("%5s投票数%d\n",symbolize[j].name,symbolize[j].count);
		
	}
	
	return 0;
}