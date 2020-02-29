#include<stdio.h>

#define max_lenght 100//不能带分号
//线性表      
/*确定长度     type（定义类型） get_length(*L)     
是否为空       type is_empty(*L)
插入           type insert(*L，index 位置 ,e元素)       
删除           type delete(*L , index)
查找           type search(*L,from,e)
修改           type update(*L,index,e)
遍历           type view(*L)      
*/


//顺序表
typedef struct student {
	int num[max_lenght];//   顺序表的数组空间  
	int lenght;//记录（当前存放个数）实际长度
}stu;


//获取数据
int get_lenght(stu* L) {
	return L->lenght;
}



//是否为空
int is_empty(stu* L) {
	return L->lenght == 0;//为空返回1   不为空返回0   （返回值自己决定）
	/*
	或者
	if (L->lenght==0) {
		return 1;
	}
	else
	{
		return 0;
	}
	*/
	
}



//遍历
void view(stu* L) {
	int i;
	for ( i = 0; i < L->lenght; i++)
	{
		printf("%d ",L->num[i]);
	}
	printf("  <-遍历的结果\n");
}




//插入顺序表
int insert(stu *L,int index,int e) {//返回值可以
	//检查顺序表是否已满
	if (L->lenght == max_lenght) {
		return 1;//返回1表示已满
	}

	//插入的位置是否合理
	//不能在数组0之前，不能队伍之后与队伍有空格
	if (index<0||index>L->lenght) {//不需要L->lenght +1  数组从0开始
		return 2;//不合理返回2
	}

	int i;
	//将插入的位置及后面的队伍  依次 移动一位
	for (i = L->lenght; i >=index;i--) {//使用i=L->lenght
		L->num[i] = L->num[i-1];//       L->num[L->lenght]为空
		// 最后的数应为                  L->num[L->lenght-1]
	}

	//开始插入   
	L->num[index] = e;
	L->lenght++;
	return 0;
}




//删除
int delete(stu*L,int index) {
	//判断顺序表是否为空
	if (L->lenght==0) {
		return 1;
	}
	//判断删除是否合理
	if (index<0||index>=L->lenght) {
		return 2;
	}
	//移动赋值
	int i;
	for ( i = 0; i < L->lenght-index-1; i++)
	{
		/*L->num[index] = L->num[index + 1];
		L->num[index+1] = L->num[index + 2];*/
		
		L->num[index + i] = L->num[index + i + 1];
	}
	//长度减1
	L->lenght--;
	return 0;
}



//查询数据    查询不到返回   -1   其他值表示  位置
//查询多次是在main函数中决定
int search(stu* L, int from, int e) {
	//判断数据是否为空
	if (L->lenght == 0) {
		return -1;
	}
	//遍历 顺序表 从from开始查询
	int i = 0;
	for (i = from; i < L->lenght; i++)
	{
		if (L->num[i] == e) {
			return i;
		}
	}
	return -1;//return -1;必须在for循环之外   否则只会判断  from 是否为 e（想查询数）
}


//修改操作
int update(stu*L,int index,int e) {
	//判断是否为空
	if (L->lenght==0) {
		return 1;
	}
	//判断位置是否合理
	if (index<0||index>L->lenght) {
		return 2;
	}
	//改变change
	L->num[index] = e;
	return 0;
}


int main() {
	stu man = { 0 };
	printf("%d\n",get_lenght(&man));
	view(&man);
	if (is_empty(&man)) {
		printf("顺序表为空\n");
	}
	else
	{
		printf("顺序表不为空\n");
	}
	
	int ret=insert(&man,0,99);
	switch (ret)
	{
	case 0:
		printf("插入成功\n");
		break;
	case 1:
		printf("顺序表已满\n");
		break;
	case 2:
		printf("插入不合理\n");
		break;
	default:
		printf("error\n");
		break;
	}

	//printf("%d\n", get_lenght(&man));

	if (is_empty(&man)) {
		printf("顺序表为空\n");
	}
	else
	{
		printf("顺序表不为空\n");
	}
	//添加

	insert(&man, 0, 1);
	insert(&man, 1, 2);
	insert(&man, 2, 3);
	insert(&man, 3, 4);
	insert(&man, 4, 5);
	view(&man);
	//删除
	//delete(&man, 3);
	printf("开始删除\n");
	int len=get_lenght;
	for (int i = 0; i <len; i++)
	{
		delete(&man, 0);
	}
	printf("删除后长度为%d\n", get_lenght(&man));
	if (is_empty(&man)) {
		printf("顺序表为空\n");
	}
	else
	{
		printf("顺序表不为空\n");
	}
	//遍历
	view(&man);


	//查询
	printf("以下为此时实验结果\n");
	insert(&man, 0, 1);
	insert(&man, 1, 4);
	insert(&man, 2, 3);
	insert(&man, 3, 4);
	insert(&man, 4, 4);
	view(&man);
	int from = 0;
	//int index = 0;
	int xx = 0;
	//不能查   重复数值    只能找到第一个   结束   UP 后 创建循环
	/*index = search(&man, from, 4);
	if (index == -1) {
		printf("未查询到该数据\n");
	}
	else {
		printf("查找数值在第%d位\n", index);
	}*/

	while (1)
	{
		int index = search(&man,from,4);//为什么 有int 没事？？这不是重复定义了吗
		if (index==-1)
		{
			break;
		}
		printf("找到数据的%d\n",index);
		from = index + 1;
		++xx;
	}
	if (xx == 0) {//    这么长的代码   只有这是自己写的  
		printf("未找到数据\n");
	}
	else
	{
		printf("共找到%d个\n",xx);// 最后才找到写代码感觉
	}


	view(&man);
	ret=update(&man,0,4);
	if (1 == ret) {
		printf("修改失败，链表为空\n");
	}
	else if(2==ret)
	{
		printf("修改不合理\n");
	}
else
	{
		printf("修改成功\n");
	}
	view(&man);

	return 0;
}