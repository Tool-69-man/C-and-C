#include<stdio.h>
int main() {
	struct date
	{
		char name[20];
		int year;
		int month;
		int day;
	}mydate = {2000,12,12};
	strcpy(mydate.name, "鲁鲁修");
	//mydate.day = 12;删除mydate 中day 数值 后期赋值 p不指向 输出为后期赋的值
	//struct date mydate;//定义 
	struct date* p;
	p = &mydate;

	(*p).year = 2121;
	(*p).month = 6;
	p -> day = 9;
	strcpy(p->name,"五河 士道");
	printf("%s %d %d %d\n",mydate.name,mydate.year,mydate.month,mydate.day);
	//输出结果  鲁鲁修 2020 0 26  (此时 指针 p中的 month，name未赋值)
	// 名字输出因为 p指向mydate  mydate 未定义name  （p不指向name）
	printf("%s %d %d %d\n",p->name,p->year,p->month,p->day);
	printf("%s %d %d %d\n",(*p).name,(*p).year,(*p).month,(*p).day);
	return 0;
}