#include<stdio.h>
#include<stdlib.h>

//���� ѧ��ID   ���ڵ㣩 �ṹ��
typedef struct student
{
	int id;//������
	struct student* next;//ָ����

}man;
//����ṹ�嶨��
typedef struct list
{
	man* head;//ͷ�ڵ�ָ��
	int lenght;//������

}link_list;

//��ȡ����
int len(link_list* L) {
	return L->lenght;
}
//�Ƿ�Ϊ��    ����1  ��ʾ  ȷʵΪ��
int is_empty(link_list* L) {
	return L->lenght == 0;
}
//��ѯ

//     �ṹ��   ָ����   ����      �����ڵ�
//��ָ������ڴ�ռ�       �βδ���,��ֵ    ָ��next ��ֵΪ��    
man* first(int n) //���ڴ���ڵ�
{
	man* p = malloc(sizeof(man));
	p->id = n;
	p->next = NULL;
	return p;
}
//ͷ�巨   ���ǽṹ��ָ�뺯�� ����ṹ��ָ���β�*head
man* add(man* head, int n) {
	man* new = first(n);//first ������new���� new->id = n; new->next = NULL;
	new->next = head;//  new ָ�� head  ���ڵ�  ��ɵ����� 
	return new;
}
//β�巨   ����  ָ�뺯��
//�ҵ����Ľڵ�   ���  �����ڽڵ�ָ��  �¼ӵĽṹ��ڵ�
void last(man* head, int n) {
	man* L = first(n);//����  n ���½ڵ�

	man* end = head;	//  

	while (end->next != NULL)//whileѭ��һֱ�� ָ��Ϊ�յ�
	{
		end = end->next;
	}

	end->next = L;
}


int newmake(link_list *head, int index, int e) {
	//1 �жϲ����Ƿ����
	if (index < 0 || index >= head->lenght) {

	}

	//2 ����ռ�
	//3 ����  �ж��Ƿ���ͷ�ڵ�  

	//4 ���ȼ�һ





}





//ɾ��
man* delete(man* head, int n) {
	if (head->id == n)//���Ҫɾ����һ�ڵ� �Ǿ��õ�2�ڵ���head   ��һ�ڵ��ͷ�
	{
		man* p = head;
		head = p->next;
		free(p);
		return head;
		/*head = head->next;//Ϊʲô����ֱ�Ӹ�ֵ    ��Ҫ�Ҹ�p����head����
		return head;*/
	}
	else {
		man* prev = head;
		man* p = prev->next;
		while (p != NULL)
		{
			if (p->id == n)//
			{
				prev->next = p->next;
				free(p);
				printf("ɾ�����\n");
				return head;//���ؽ���
			}
			else
			{
				prev = prev->next;
				p = prev->next;
			}
		}
		printf("û�ҵ�Ҫɾ���ڵ�\n");
		return head;
	}
}


//����
//���� 1
void show1(man* head) {
	man* p = head;
	while (p != NULL)//p->next!=NULL  ��ʹ���һ���ڵ�   �޷�չʾ��
	{
		printf("%d\n", p->id);
		p = p->next;
	}
}
//����2
void show2(link_list* L) {
	man* tmp = L->head;
	int i;
	for (i = 0; i < L->lenght; i++)
	{
		printf("%d ", tmp->id);
		tmp = tmp->next;//��tmpָ����һ�ڵ�
	}

}


//���޸�    ��ԭ�������ϸĶ��ڵ���Ϣ
void change_low(man* head, int old, int new) {
	man* p = head;
	while (p != NULL)
	{
		if (p->id == old) {
			p->id = new;
			printf("�޸����\n");
			return;
		}
		else
		{
			p = p->next;
		}
	}
	printf("δ�ҵ�������\n");
}



//�����޸�     ��һ���½ڵ����һ���ɽڵ�    �Ա�������˳��





//����
void destroy(man* head) {
	man* p1 = head;
	man* p2;
	while (p1 != NULL)
	{
		p2 = p1->next;
		free(p1);
		p1 = p2;
	}
}



//���
//ȡֵ
//��ֵ����



int main() {
	//����ͷָ��   Ϊ��     ����Ľṹ��  

	man* head = NULL;

	//link_list* list_head = NULL;//

	//list_head->head = first(0);
	//link_list* list_head = {0};
	//list_head->head = first(0);
	head = first(0);
	//head=add(head,1);//ͷ����ָ��
	//head=add(head,2);
	//head=add(head,3);
	//head=add(head,4);
	last(head, 1);
	last(head, 2);
	last(head, 3);
	last(head, 4);


	head = delete(head, 0);
	head = delete(head, 4);
	show1(head);
	change_low(head, 2, 10);
	show2(list_head);
	//show1(head);

	destroy(head);

	return 0;
}