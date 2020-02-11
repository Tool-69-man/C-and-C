#include<stdio.h>

int main() {
		struct date {
			int year;
			int month;
			int day;
		};
		struct person {
			char name[10];
			struct date birthday;
		};
		struct person student;
		struct person* p = &student;
		strcpy(p->name,"ÑıÎ²");
		student.birthday.year = 2014;
		p->birthday.month = 3;
		p->birthday.day = 3;
		printf("%s %d %d %d",p->name,p->birthday.year,
			(*p).birthday.month, student.birthday.day);


	return 0;
}