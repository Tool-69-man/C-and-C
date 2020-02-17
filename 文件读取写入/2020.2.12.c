//#include <stdio.h>
//#include<stdlib.h>
//
//// 写文件示例(out.data)
//void write(int temp)
//{
//  FILE *file = fopen("X:\\C语言文件实验\\取数相加\\放入和.txt", "w");
//  if (file == NULL)
//    {
//        printf("打开文件失败...\n");
//    }
//    else
//    {
//        printf("文件打开成功...\n");
//
//        fprintf(file, "%d\n",temp);
//	
//        //关闭文件流
//        fclose(file);
//        printf("关闭文件成功...\n");
//    }
//}
//int main() {
//    int a, b, c;
//    FILE* file = fopen("X:\\C语言文件实验\\取数相加\\取出数.txt", "r");
//    if (file == NULL)
//    {
//        printf("打开文件失败...\n");
//    }
//    else
//    {
//        printf("文件打开成功...\n");
//       
//        fscanf(file, "%d %d", &a, &b);
//        printf("%d %d\n", a, b);
//        //关闭文件流
//        fclose(file);
//        printf("读取文件成功...\n");
//    }
//    c = a + b;
//    printf("%d\n",c);
//    write(c);
//    return 0;
//}









//上式成功    实验  调用读出函数如何   返回   a b
//使用   c++ void read(int &a,int &b)  实现变量的引用
//形参变成实参的别名    对形参的操作直接作用在实参     新技能Get（刚学就用上了）

//    冥冥之中 自有安排

//现在尝试C语言是否同样做到（不行  直接报错）











#include <stdio.h>
#include<stdlib.h>

//int read(int &a,int &b) {
void read(int *x,int *y) {
   
    FILE *file = fopen("X:\\C语言文件实验\\取数相加\\取出数.txt", "r");
    if (file == NULL)
    {
        printf("打开文件失败...\n");
    }
    else
    {
        printf("文件打开成功...\n");

        fscanf(file, "%d %d", &x, &y);
        printf("%d %d\n", x, y);
        //关闭文件流
        fclose(file);
        printf("读取文件成功...\n");
    }
   
}

// 写文件示例(out.data)
void write(int temp)
{
  FILE *file = fopen("X:\\C语言文件实验\\取数相加\\放入和.txt", "w");
  if (file == NULL)
    {
        printf("打开文件失败...\n");
    }
    else
    {
        printf("文件打开成功...\n");

        fprintf(file, "%d\n",temp);
	
        //关闭文件流
        fclose(file);
        printf("关闭文件成功...\n");
    }
}
int main() {
    int a=0, b=0, c=0;
    int* p1 = &a;
    int* p2 = &b;
    read(p1,p2);
    c = *p1 + *p2;
    printf("%d\n",c);
    write(c);
    return 0;
}
