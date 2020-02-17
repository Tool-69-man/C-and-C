#include<stdio.h>
#include<stdlib.h>

//定义学生ID结构体
typedef struct student
{
	int id;
	struct student* next;//指向下一节点

}man;


//     结构体   指针型   函数      创建节点
//给指针分配内存空间       形参传入,赋值    指针next 赋值为空    
man *first(int n) 
{
	man* p = malloc(sizeof(man));
	p->id = n;
	p->next = NULL;
	return p;
}
//头插法   还是结构体指针函数 传入结构体指针形参*head
man* add(man *head,int n) {
	man* new = first(n);//first 函数被new接收 new->id = n; new->next = NULL;
	new->next = head;//  new 指向 head  两节点  变成单链表 
	return new;
}
//尾插法   先用  指针函数
//找到最后的节点   随后  将最后第节点指向  新加的结构体节点
void last(man *head,int n) {
	man* L = first(n);//调用函数 

	man* end = head;		  // 创建节点  
	
	while (end->next != NULL)//while循环一直找 指向为空的
	{
		end = end->next;
	}
	
	end->next = L;
}

int main() {
	//来个头指针   为空     定义的结构体  
	man* head = NULL;
	head = first(0);
	//head=add(head,1);//头插入指针
	//head=add(head,2);
	//head=add(head,3);
	//head=add(head,4);
	last(head, 1);
	last(head, 2);
	last(head, 3);
	last(head, 4);
	return 0;
}