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
int look(link_list *L,int from,int e) {
	//�ж��Ƿ�Ϊ��
	if (L->lenght==0) {
		return 1;
	}
	//��һ��   �ҵ�from λ�ýڵ� 
	man* tmp = L->head;
	int i=0;
	for ( i = 0; i < from; i++)
	{
		tmp = tmp->next;
	}
	//�ڶ���   ��from�ڵ㴦��ʼ��
	for ( i = from; i < L->lenght; i++)
	{
		if (tmp->id==e)
		{
			return i;//ע��ֻ����һ����ֵ   �뷴����������
		}
		tmp = tmp->next;
	}
	return -1;//���û�ҵ�
}






int newmake(link_list*L, int index, int e) {
	//1 �жϲ����Ƿ����
	if (index < 0 || index >= L->lenght) {
		return 1;
	}

	//2 ����ռ�
	man* p_new=(man*)malloc(sizeof(man));
	p_new->id = e;
	p_new->next = NULL;

	//3 ����  �ж��Ƿ���ͷ�ڵ�  
	if (index==0) {
		p_new->next = L->head;
		L->head = p_new;
	}
	else
	{
		int i = 0;
		man* tmp = L->head;
		for ( i = 0; i < index-1; i++)
		{
			tmp = tmp->next;
		}
		p_new->next = tmp->next;
		tmp->next = p_new;
	}

	//4 ���ȼ�һ
	L->lenght++;
}



//ɾ���ڵ�
int delete(link_list*L,int index) {
	//�ж���Ϊ�ձ�
	if (L->lenght==0) {
		return 1;
	}

	//�ж�ɾ���Ƿ����
	if (index<0||index>=L->lenght) {
		return 2;
}

	//��ʼɾ��   1.  �Ƿ�Ϊͷ�ڵ�    2. else
	if (0==index) {
		man* tmp = L->head;
		L->head = tmp->next;
		free(tmp);
	}
	else
	{
		man* left = L->head;
		man* right = NULL;//����  һ��һ�� ָ��   right��Ҫɾ���Ľڵ�
		int i = 0;
		for ( i = 0; i < index-1; i++)
		{
			left = left->next;
		}
		right=left->next;
		left->next = right->next;
		free(right);
	}

	//���ȼ���
	L->lenght--;
}


//����

void show2(link_list* L) {
	man* tmp = L->head;
	int i;
	for (i = 0; i < L->lenght; i++)
	{
		printf("%d ", tmp->id);
		tmp = tmp->next;//��tmpָ����һ�ڵ�
	}

}











int main() {
	link_list* head = { 0 };
	return 0;
}

free()
{
}
