#include<stdio.h>
#include<stdlib.h>

//定义 学生ID   （节点） 结构体
typedef struct student
{
	int id;//数据域
	struct student* next;//指针域

}man;

//     结构体   指针型   函数      创建节点
//给指针分配内存空间       形参传入,赋值    指针next 赋值为空    
man *first(int n) //用于创造节点
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
	man* L = first(n);//创建  n 的新节点

	man* end = head;	//  
	
	while (end->next != NULL)//while循环一直找 指向为空的
	{
		end = end->next;
	}
	
	end->next = L;
}







//删除
man* delete(man*head,int n) {
	if (head->id==n)//如果要删除第一节点 那就让第2节点变成head   第一节点释放
	{
		man* p = head;
		head = p->next;
		free(p);
		return head;
		/*head = head->next;//为什么不能直接赋值    非要找个p接收head的能
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
				printf("删除完成\n");
				return head;//返回结束
			}
			else
			{
				prev = prev->next;
				p = prev->next;
			}
		}
		printf("没找到要删除节点\n");
		return head;
	}
}


//遍历
void show(man*head) {
	man* p = head;
	while (p!=NULL)//p->next!=NULL  会使最后一个节点   无法展示出
	{
		printf("%d\n",p->id);
		p = p->next;
	}
}


//简单修改    在原来基础上改动节点信息
void change_low(man*head,int old,int new) {
	man* p = head;
	while(p != NULL)
	{
		if (p->id == old) {
			p->id = new;
			printf("修改完成\n");
			return;
		}
		else
		{
			p = p->next;
		}
	}
	printf("未找到该数据\n");
}



//复杂修改     将一个新节点代替一个旧节点    仍保持运行顺利





//销毁
void destroy(man *head) {
	man* p1=head;
	man* p2;
	while (p1!=NULL)
	{
		p2=p1->next;
		free(p1);
		p1 = p2;
	}
}



//清空
//取值
//按值查找



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


	head = delete(head,0);
	head = delete(head,4);
	show(head);
	change_low(head,2,10);
	
	show(head);

	destroy(head);


	return 0;
}