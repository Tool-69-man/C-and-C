#include<stdio.h>
int main() {
	struct date
	{
		char name[20];
		int year;
		int month;
		int day;
	}mydate = {2000,12,12};
	strcpy(mydate.name, "³³��");
	//mydate.day = 12;ɾ��mydate ��day ��ֵ ���ڸ�ֵ p��ָ�� ���Ϊ���ڸ���ֵ
	//struct date mydate;//���� 
	struct date* p;
	p = &mydate;

	(*p).year = 2121;
	(*p).month = 6;
	p -> day = 9;
	strcpy(p->name,"��� ʿ��");
	printf("%s %d %d %d\n",mydate.name,mydate.year,mydate.month,mydate.day);
	//������  ³³�� 2020 0 26  (��ʱ ָ�� p�е� month��nameδ��ֵ)
	// ���������Ϊ pָ��mydate  mydate δ����name  ��p��ָ��name��
	printf("%s %d %d %d\n",p->name,p->year,p->month,p->day);
	printf("%s %d %d %d\n",(*p).name,(*p).year,(*p).month,(*p).day);
	return 0;
}