#include<stdio.h>
#include<stdlib.h>

//����ѧ��ID�ṹ��
typedef struct student
{
	int id;
	char *name[20];
	struct student* next;//ָ����һ�ڵ�

}man;


//     �ṹ��   ָ����   ����      �����ڵ�
//��ָ������ڴ�ռ�       �βδ���,��ֵ    ָ��next ��ֵΪ��    
man* first(int n,char *name)
{
	man* p = malloc(sizeof(man));
	p->id = n;
    strcpy(p->name,"*name");
	p->next = NULL;
	return p;
}
//ͷ�巨   ���ǽṹ��ָ�뺯�� ����ṹ��ָ���β�*head
man* add(man* head, int n,char *name) {
	man* new = first(n,*name);//first ������new���� new->id = n; new->next = NULL;
	new->next = head;//  new ָ�� head  ���ڵ�  ��ɵ����� 
	return new;
}




int main() {
	//����ͷָ��   Ϊ��     ����Ľṹ��  
	man* head = NULL;
	head = first(0,"³³��");
	head = add(head, 1,"һȭ����");
	head = add(head, 2,"ZERO TWO");
	head = add(head, 3,"��ɫ�ಾ");
	head = add(head, 4,"��ϵ��");
	return 0;
}