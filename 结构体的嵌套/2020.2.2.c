#include<stdio.h>
int main() {
	struct date {
		int year;
		int month;
		int day;
	}now = {2020,2};
	now.day = 2;
	struct person {
		char name[10];
		struct date birthday;

	}boy = {"ά��",2000/12/12};
	boy.birthday.year = 2000;
	boy.birthday.month = 12;
	boy.birthday.day = 12;
	printf("%d %d %d\n",now.year,now.month,now.day);//p->birthday.day;

	printf("%s %d %d %d\n",boy.name,boy.birthday.year,boy.birthday.month,boy.birthday.day);
	//printf("%s %s",boy.name,boy.birthday);//boy.birthday�ǽṹ�� ���ܸ�ֵ
	return 0;
}