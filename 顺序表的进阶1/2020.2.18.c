#include<stdio.h>

#define max_lenght 100//���ܴ��ֺ�
//���Ա�      
/*ȷ������     type���������ͣ� get_length(*L)
�Ƿ�Ϊ��       type is_empty(*L)
����           type insert(*L��index λ�� ,eԪ��)
ɾ��           type delete(*L , index)
����           type search(*L,from,e)
�޸�           type update(*L,index,e)
����           type view(*L)
*/


//˳���
typedef struct student {
	int num[max_lenght];//   ˳��������ռ�  
	int lenght;//��¼����ǰ��Ÿ�����ʵ�ʳ���
}stu;


//��ȡ����
int get_lenght(stu* L) {
	return L->lenght;
}



//�Ƿ�Ϊ��
int is_empty(stu* L) {
	return L->lenght == 0;//Ϊ�շ���1   ��Ϊ�շ���0   ������ֵ�Լ�������
	/*
	����
	if (L->lenght==0) {
		return 1;
	}
	else
	{
		return 0;
	}
	*/

}



//����
void view(stu* L) {
	int i;
	for (i = 0; i < L->lenght; i++)
	{
		printf("%d ", L->num[i]);
	}
	printf("  <-�����Ľ��\n");
}




//����˳���
int insert(stu* L, int index, int e) {//����ֵ����
	//���˳����Ƿ�����
	if (L->lenght == max_lenght) {
		return 1;//����1��ʾ����
	}

	//�����λ���Ƿ����
	//����������0֮ǰ�����ܶ���֮��������пո�
	if (index<0 || index>L->lenght) {//����ҪL->lenght +1  �����0��ʼ
		return 2;//��������2
	}

	int i;
	//�������λ�ü�����Ķ���  ���� �ƶ�һλ
	for (i = L->lenght; i >= index; i--) {//ʹ��i=L->lenght
		L->num[i] = L->num[i - 1];//       L->num[L->lenght]Ϊ��
		// ������ӦΪ                  L->num[L->lenght-1]
	}

	//��ʼ����   
	L->num[index] = e;
	L->lenght++;
	return 0;
}




//ɾ��
int delete(stu* L, int index) {
	//�ж�˳����Ƿ�Ϊ��
	if (L->lenght == 0) {
		return 1;
	}
	//�ж�ɾ���Ƿ����
	if (index < 0 || index >= L->lenght) {
		return 2;
	}
	//�ƶ���ֵ
	int i;
	for (i = 0; i < L->lenght - index - 1; i++)
	{
		/*L->num[index] = L->num[index + 1];
		L->num[index+1] = L->num[index + 2];*/

		L->num[index + i] = L->num[index + i + 1];
	}
	//���ȼ�1
	L->lenght--;
	return 0;
}



//��ѯ����    ��ѯ��������   -1   ����ֵ��ʾ  λ��
//��ѯ�������main�����о���
int search(stu* L, int from, int e) {
	//�ж������Ƿ�Ϊ��
	if (L->lenght == 0) {
		return -1;
	}
	//���� ˳��� ��from��ʼ��ѯ
	int i = 0;
	for (i = from; i < L->lenght; i++)
	{
		if (L->num[i] == e) {
			printf("����λ��%d\n", i);//   �Ľ�Ϊʲô��ֱ�� ������ݣ�����
		}
	}
	return -1;//return -1;������forѭ��֮��   ����ֻ���ж�  from �Ƿ�Ϊ e�����ѯ����
}



int main() {
	stu man = {0};
	get_lenght(&man);
	if (is_empty(&man)) {
		printf("˳���Ϊ��\n");
	}
	else
	{
		printf("˳���Ϊ��\n");
	}

	insert(&man, 0, 1);
	insert(&man, 1, 3);
	insert(&man, 2, 3);
	insert(&man, 3, 4);
	insert(&man, 4, 3);
	view(&man);
	int from = 0;
	int index = 0;

	search(&man,from,3);

	return 0;
}

