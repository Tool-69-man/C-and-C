#include<stdio.h>
#include<stdlib.h>

//����ѧ��ID�ṹ��
typedef struct student
{
	int id;
	struct student* next;//ָ����һ�ڵ�

}man;


//     �ṹ��   ָ����   ����      �����ڵ�
//��ָ������ڴ�ռ�       �βδ���,��ֵ    ָ��next ��ֵΪ��    
man *first(int n) 
{
	man* p = malloc(sizeof(man));
	p->id = n;
	p->next = NULL;
	return p;
}
//ͷ�巨   ���ǽṹ��ָ�뺯�� ����ṹ��ָ���β�*head
man* add(man *head,int n) {
	man* new = first(n);//first ������new���� new->id = n; new->next = NULL;
	new->next = head;//  new ָ�� head  ���ڵ�  ��ɵ����� 
	return new;
}
//β�巨   ����  ָ�뺯��
//�ҵ����Ľڵ�   ���  �����ڽڵ�ָ��  �¼ӵĽṹ��ڵ�
void last(man *head,int n) {
	man* L = first(n);//���ú��� 

	man* end = head;		  // �����ڵ�  
	
	while (end->next != NULL)//whileѭ��һֱ�� ָ��Ϊ�յ�
	{
		end = end->next;
	}
	
	end->next = L;
}

int main() {
	//����ͷָ��   Ϊ��     ����Ľṹ��  
	man* head = NULL;
	head = first(0);
	//head=add(head,1);//ͷ����ָ��
	//head=add(head,2);
	//head=add(head,3);
	//head=add(head,4);
	last(head, 1);
	last(head, 2);
	last(head, 3);
	last(head, 4);
	return 0;
}