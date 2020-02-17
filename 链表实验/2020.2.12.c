#include<stdio.h>
#include<stdlib.h>

//定义学生ID结构体
typedef struct student
{
	int id;
	char *name[20];
	struct student* next;//指向下一节点

}man;


//     结构体   指针型   函数      创建节点
//给指针分配内存空间       形参传入,赋值    指针next 赋值为空    
man* first(int n,char *name)
{
	man* p = malloc(sizeof(man));
	p->id = n;
    strcpy(p->name,"*name");
	p->next = NULL;
	return p;
}
//头插法   还是结构体指针函数 传入结构体指针形参*head
man* add(man* head, int n,char *name) {
	man* new = first(n,*name);//first 函数被new接收 new->id = n; new->next = NULL;
	new->next = head;//  new 指向 head  两节点  变成单链表 
	return new;
}




int main() {
	//来个头指针   为空     定义的结构体  
	man* head = NULL;
	head = first(0,"鲁鲁修");
	head = add(head, 1,"一拳超人");
	head = add(head, 2,"ZERO TWO");
	head = add(head, 3,"白色相簿");
	head = add(head, 4,"四系乃");
	return 0;
}