#include<stdio.h>
#include<string.h>
typedef struct list {
	int num;
	char name[20];
	struct list* next;
}node;
typedef node* link;

link fanZhan(link x) {
	link f, q, r;
	f = x;
	q = NULL;
	while (f!=NULL)
	{
		r = q;
		q = f;
		f = f->next;
		q->next = r;
	}
	return q;
}

int main() {
	int i = 0;
	node n1[6] = { {00,"³³��"},{01,"һȭ����"},{02,"darling"},{03,"����"},{04,"�������"} };
	
	for ( i = 0; i < 5; i++)
	{
		n1[i].next = &n1[i+1];

	}
	n1[4].next = NULL;
	
	for (i = 0; i < 5; i++)
	{
		printf("%4d", n1[i].num);
		printf("%10s\n", n1[i].name);
	}

	printf("������ת\n");
	link m=fanZhan(n1);
	for ( i = 0; i < 5; i++)
	{
		/*printf("%4d",n1[i].num);
		printf("%10s\n",n1[i].name);*/
		printf("%4d",m->num);
		printf("%10s\n",m->name);
		m=m->next;
		
	}
	

	return 0;
}