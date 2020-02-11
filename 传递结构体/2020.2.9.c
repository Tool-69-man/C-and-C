
#include "stdio.h"
//定义结构体 
struct student
{
	int seq;
	int score;
};
void f(struct student p)//stu  传入  p
{
	p.score = (p.score) * (p.score) + p.score + p.seq + 10;
}
void f1(struct student* p)//
{
	p->score = (p->score) * (p->score) + p->score + p->seq + 10;
}
int main()
{
	struct student stu, * pstu1, * pstu2;
	stu.seq = 1; stu.score = 70;
	//结构体指针初始化：赋值 
	pstu1 = &stu;
	//输出
	f(stu);
	printf("序号是：%d，分数为：%d\n", stu.seq, stu.score);
	f1(pstu1);
	printf("序号是：%d，分数为：%d\n", pstu1->seq, pstu1->score);
	return(0);
}