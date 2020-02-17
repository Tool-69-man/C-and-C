#include<iostream>
#include <stdio.h>
#include<stdlib.h>

void read(int &a, int &b) {


    FILE* file = fopen("X:\\C语言文件实验\\取数相加\\取出数.txt", "r");
    if (file == NULL)
    {
        printf("打开文件失败...\n");
    }
    else
    {
        printf("文件打开成功...\n");

        fscanf(file, "%d %d", &a, &b);
        printf("%d %d\n", a, b);
        //关闭文件流
        fclose(file);
        printf("读取文件成功...\n");
    }

}

// 写文件示例(out.data)
void write(int temp)
{
    FILE* file = fopen("X:\\C语言文件实验\\取数相加\\放入和.txt", "w");
    if (file == NULL)
    {
        printf("打开文件失败...\n");
    }
    else
    {
        printf("文件打开成功...\n");

        fprintf(file, "%d\n", temp);

        //关闭文件流
        fclose(file);
        printf("关闭文件成功...\n");
    }
}
int main() {
    int a, b, c;
    read(a, b);
    c = a + b;
    printf("%d\n", c);
    write(c);
    return 0;
}