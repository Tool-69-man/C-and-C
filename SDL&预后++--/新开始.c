#include <stdio.h>
int main() {
	int a = 1;
	printf("%d\n",++a);
	printf("%d\n",a);
	a = 1;
	printf("%d\n,%d\n",a++,a);
	a = 1;
	printf("%d\n,%d\n",--a,a);
	a = 1;
	printf("%d\n,%d\n",a--,a);//将属性改变“否（/WX-）”“是（）”后
	int b = 2;
	printf("%d\n%d", b,--b);//不会因为b和++b顺序答案错
	return 0;//哦！我试好了不是将“是”改“否”，只要删去SDL！！！！！
	//visual studio升级了创建源文件之后可以从属性中改为否（不是手动输入否）《12月27日实验》
	//当然直接删除也可以《12月27日实验》
	scanf_s("%d",&a);//不改sdl也可以在scanf后加_s《12月27日实验》
	printf("%d", a);

	scanf_s("%d", &a);
	printf("%d", a);
}