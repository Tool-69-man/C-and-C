#include<stdio.h>
#include<string.h>
int main() {
	int i, j;
	struct male_lead
	{
		char name[20];
		int count;
	}symbolize[3] = {"³³��",0,"��� ʿ��",0,"�涷",0};

	char name[20];

	for (j = 0; j < 10; j++)
	{
		scanf("%s",&name);//����� ʿ����  ���пո�  scanf �� �� ѡ��gets
		//gets(name);
		for (i = 0; i < 3; i++)//    ����forѭ��   i  , j ���� ��������ѭ��
		{
			if (strcmp(name, symbolize[i].name) == 0)
			{
				symbolize[i].count++;

			}
		}
	}
	for ( j = 0; j < 3; j++)
	{
		printf("%5sͶƱ��%d\n",symbolize[j].name,symbolize[j].count);
		
	}
	
	return 0;
}