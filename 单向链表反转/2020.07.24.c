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
	node n1[6] = { {00,"鲁鲁修"},{01,"一拳超人"},{02,"darling"},{03,"狂三"},{04,"罪恶王冠"} };
	
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

	printf("两级反转\n");
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