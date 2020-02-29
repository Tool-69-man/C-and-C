#include<stdio.h>
#include<stdlib.h>

//定义 学生ID   （节点） 结构体
typedef struct student
{
	int id;//数据域
	struct student* next;//指针域

}man;
//链表结构体定义
typedef struct list
{
	man* head;//头节点指针
	int lenght;//链表长度

}link_list;

//获取长度
int len(link_list* L) {
	return L->lenght;
}
//是否为空    返回1  表示  确实为空
int is_empty(link_list* L) {
	return L->lenght == 0;
}
//查询
int look(link_list *L,int from,int e) {
	//判断是否为空
	if (L->lenght==0) {
		return 1;
	}
	//第一步   找到from 位置节点 
	man* tmp = L->head;
	int i=0;
	for ( i = 0; i < from; i++)
	{
		tmp = tmp->next;
	}
	//第二布   从from节点处开始找
	for ( i = from; i < L->lenght; i++)
	{
		if (tmp->id==e)
		{
			return i;//注意只能找一个数值   想反复找需多调用
		}
		tmp = tmp->next;
	}
	return -1;//如果没找到
}






int newmake(link_list*L, int index, int e) {
	//1 判断插入是否合理
	if (index < 0 || index >= L->lenght) {
		return 1;
	}

	//2 申请空间
	man* p_new=(man*)malloc(sizeof(man));
	p_new->id = e;
	p_new->next = NULL;

	//3 插入  判断是否是头节点  
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

	//4 长度加一
	L->lenght++;
}



//删除节点
int delete(link_list*L,int index) {
	//判断是为空表
	if (L->lenght==0) {
		return 1;
	}

	//判断删除是否合理
	if (index<0||index>=L->lenght) {
		return 2;
}

	//开始删除   1.  是否为头节点    2. else
	if (0==index) {
		man* tmp = L->head;
		L->head = tmp->next;
		free(tmp);
	}
	else
	{
		man* left = L->head;
		man* right = NULL;//定义  一左一右 指针   right是要删除的节点
		int i = 0;
		for ( i = 0; i < index-1; i++)
		{
			left = left->next;
		}
		right=left->next;
		left->next = right->next;
		free(right);
	}

	//长度减少
	L->lenght--;
}


//遍历

void show2(link_list* L) {
	man* tmp = L->head;
	int i;
	for (i = 0; i < L->lenght; i++)
	{
		printf("%d ", tmp->id);
		tmp = tmp->next;//将tmp指向下一节点
	}

}











int main() {
	link_list* head = { 0 };
	return 0;
}

free()
{
}
