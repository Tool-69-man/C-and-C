#include<stdio.h>
int main() {

	//typedef int all[4];
	//typedef  int 立法;
	//all s1[3] = {1,15,30};//all s1==int s1[3]; all s1[3]==int *s1[3]
	//printf("%p %p %p\n", s1[0],s1[1],s1[2]);
	//int* s2[3] = {1,15,30};
	//printf("%p %p %p\n", &s2[0], &s2[1], &s2[2]);

	//typedef struct lol {
	//	char name[20];
	//	int age;

	//}student;//student 原本为结构体变量    
	//		 //typedef 后 可以定义新变量 但不再是变量
	////         无法再赋值                 
	//student boy_a, boy_b;
	//boy_a.age = 15;
	//boy_b.age = 19;
	//student boy_c;
	//boy_c.age = 11;


	typedef int 鲁鲁修;//鲁鲁修==int
	typedef 鲁鲁修 吾王, * CC;//吾王==鲁鲁修 
	//CC==鲁鲁修 *    CC==int *
	鲁鲁修 a = 12, b = 13;
	鲁鲁修* q = &a;
	CC p= &b;
	printf("%d,%p\n",a,q);
	printf("%d,%p\n",b,p);
	
	return 0;
}