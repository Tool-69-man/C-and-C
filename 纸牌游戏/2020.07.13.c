//ֽ����Ϸ - Сè����  
//��������ͬ����  �����е�һ�Ž�����Ʒ���������
//���ĳ�˴����������������ͬ
//�ɽ�������ͬ��֮������������ߣ�����ĩβ
//���Ƴ���ʱ��ʧ��

//��� a,b �����Ƕ���
//����  z   ��ջ

//����
//�������������    ÿ��6��
//����	1~9
//a�ȳ��ƣ����ӣ���ջ�� 
//�ж��Ƿ�����ͬ����    �����ü򵥵�Ͱ����
// Ӯ�ƣ����Ƽ�������ջ����ӣ�
// ûӮ��û����������˽�����
//b ͬ��
//�����Ϸһֱ����  ��ô�� 

#include<stdio.h>
#include<string.h>

struct quque//���
{
	int data[100];
	int head;
	int tail;
};

struct stack
{
	int nun[10];
	int top;
};
int main() {
	struct quque a, b;
	struct stack z;
	a.head = 1;
	b.head = 1;
	a.tail = 1;
	b.tail = 1;
	int book[10] = {0};
	z.top = 0;
	int i = 0;
	int j = 0;
	int t = 0;

	//�����������
	for ( i = 1; i <= 6; i++)
	{
		printf("����a�������:");
		scanf("%d",&a.data[a.tail]);
		a.tail++;
	}
	printf("\n=========================\n");
	for ( j = 1; j <= 6; j++)
	{
		printf("����b�������:");
		scanf("%d",&b.data[b.tail]);
		b.tail++;
	}
	//head=1  tail=7  ����6��
	//��head=tail����Ϊ��,��Ϸ����
	while (a.head<a.tail&&b.head<b.tail)
	{
		//����
		t = a.data[a.head];
		a.head++;
		if (book[t]==0)//ûӮ
		{
			

			z.top++;//��ջ
			z.nun[z.top] = t;
			book[t] = 1;
		}
		else//Ӯ��
		{
			a.data[a.tail] = t;
			a.tail++;
			while( t!=z.nun[z.top])
			{
				book[z.nun[z.top]] = 0;
				a.data[a.tail] = z.nun[z.top];
				a.tail++;
				z.top--;
			}
			book[z.nun[z.top]] = 0;//��������Ϊt
			a.data[a.tail] = z.nun[z.top];
			a.tail++;
			z.top--;

		}
		if (a.head==a.tail)
		{
			printf("a����Ϊ0,��Ϸ����\n");
			break;
		}

		t = b.data[b.head];
		b.head++;
		if (book[t]==0)
		{
			book[t] = 1;
			z.top++;
			z.nun[z.top] = t;
			
		}
		else
		{
			b.data[b.tail] = t;
			b.tail++;
			while (t!=z.nun[z.top])
			{
				b.data[b.tail] = z.nun[z.top];
				b.tail++;
				book[z.nun[z.top]] = 0;
				z.top--;
				
			}
			b.data[b.tail] = z.nun[z.top];
			b.tail++;
			book[z.nun[z.top]] = 0;
			z.top--;
		}
	}//���b��Ҵ�����  �����ѭ��

	if (b.head==b.tail)
	{
		printf("a���ʤ��\n");
		printf("a�������չʾ:");
			for ( i = a.head; i < a.tail; i++)
			{
				printf(" %d, ",a.data[i]);
			}
			if (z.top>0)
			{
				printf("\n����ʣ���ǣ�\n");
				for ( i = 1; i <= z.top; i++)
				{
					printf(" %d,",z.nun[i]);
				}
			}
			else
			{
				printf("����û����\n");
			}
	}
	else
	{
		printf("b���ʤ��\n");
		printf("b�������չʾ:");
		for (i = b.head; i < b.tail; i++)
		{
			printf(" %d, ", b.data[i]);
		}
		if (z.top > 0)
		{
			printf("\n����ʣ���ǣ�\n");
			for (i = 1; i <= z.top; i++)
			{
				printf(" %d,", z.nun[i]);
			}
		}
		else
		{
			printf("����û����\n");
		}
	}
	getchar();
	getchar();
	return 0;
}