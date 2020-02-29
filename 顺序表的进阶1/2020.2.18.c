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
	for (i = 0; i < L->lenght; i++)
	{
		printf("%d ", L->num[i]);
	}
	printf("  <-遍历的结果\n");
}




//插入顺序表
int insert(stu* L, int index, int e) {//返回值可以
	//检查顺序表是否已满
	if (L->lenght == max_lenght) {
		return 1;//返回1表示已满
	}

	//插入的位置是否合理
	//不能在数组0之前，不能队伍之后与队伍有空格
	if (index<0 || index>L->lenght) {//不需要L->lenght +1  数组从0开始
		return 2;//不合理返回2
	}

	int i;
	//将插入的位置及后面的队伍  依次 移动一位
	for (i = L->lenght; i >= index; i--) {//使用i=L->lenght
		L->num[i] = L->num[i - 1];//       L->num[L->lenght]为空
		// 最后的数应为                  L->num[L->lenght-1]
	}

	//开始插入   
	L->num[index] = e;
	L->lenght++;
	return 0;
}




//删除
int delete(stu* L, int index) {
	//判断顺序表是否为空
	if (L->lenght == 0) {
		return 1;
	}
	//判断删除是否合理
	if (index < 0 || index >= L->lenght) {
		return 2;
	}
	//移动赋值
	int i;
	for (i = 0; i < L->lenght - index - 1; i++)
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
			printf("所在位置%d\n", i);//   改进为什么不直接 输出数据？？？
		}
	}
	return -1;//return -1;必须在for循环之外   否则只会判断  from 是否为 e（想查询数）
}



int main() {
	stu man = {0};
	get_lenght(&man);
	if (is_empty(&man)) {
		printf("顺序表为空\n");
	}
	else
	{
		printf("顺序表不为空\n");
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

