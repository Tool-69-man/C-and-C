
#include "stdio.h"
//����ṹ�� 
struct student
{
	int seq;
	int score;
};
void f(struct student p)//stu  ����  p
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
	//�ṹ��ָ���ʼ������ֵ 
	pstu1 = &stu;
	//���
	f(stu);
	printf("����ǣ�%d������Ϊ��%d\n", stu.seq, stu.score);
	f1(pstu1);
	printf("����ǣ�%d������Ϊ��%d\n", pstu1->seq, pstu1->score);
	return(0);
}