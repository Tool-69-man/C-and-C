//#include <stdio.h>
//#include<stdlib.h>
//
//// д�ļ�ʾ��(out.data)
//void write(int temp)
//{
//  FILE *file = fopen("X:\\C�����ļ�ʵ��\\ȡ�����\\�����.txt", "w");
//  if (file == NULL)
//    {
//        printf("���ļ�ʧ��...\n");
//    }
//    else
//    {
//        printf("�ļ��򿪳ɹ�...\n");
//
//        fprintf(file, "%d\n",temp);
//	
//        //�ر��ļ���
//        fclose(file);
//        printf("�ر��ļ��ɹ�...\n");
//    }
//}
//int main() {
//    int a, b, c;
//    FILE* file = fopen("X:\\C�����ļ�ʵ��\\ȡ�����\\ȡ����.txt", "r");
//    if (file == NULL)
//    {
//        printf("���ļ�ʧ��...\n");
//    }
//    else
//    {
//        printf("�ļ��򿪳ɹ�...\n");
//       
//        fscanf(file, "%d %d", &a, &b);
//        printf("%d %d\n", a, b);
//        //�ر��ļ���
//        fclose(file);
//        printf("��ȡ�ļ��ɹ�...\n");
//    }
//    c = a + b;
//    printf("%d\n",c);
//    write(c);
//    return 0;
//}









//��ʽ�ɹ�    ʵ��  ���ö����������   ����   a b
//ʹ��   c++ void read(int &a,int &b)  ʵ�ֱ���������
//�βα��ʵ�εı���    ���βεĲ���ֱ��������ʵ��     �¼���Get����ѧ�������ˣ�

//    ڤڤ֮�� ���а���

//���ڳ���C�����Ƿ�ͬ������������  ֱ�ӱ���











#include <stdio.h>
#include<stdlib.h>

//int read(int &a,int &b) {
void read(int *x,int *y) {
   
    FILE *file = fopen("X:\\C�����ļ�ʵ��\\ȡ�����\\ȡ����.txt", "r");
    if (file == NULL)
    {
        printf("���ļ�ʧ��...\n");
    }
    else
    {
        printf("�ļ��򿪳ɹ�...\n");

        fscanf(file, "%d %d", &x, &y);
        printf("%d %d\n", x, y);
        //�ر��ļ���
        fclose(file);
        printf("��ȡ�ļ��ɹ�...\n");
    }
   
}

// д�ļ�ʾ��(out.data)
void write(int temp)
{
  FILE *file = fopen("X:\\C�����ļ�ʵ��\\ȡ�����\\�����.txt", "w");
  if (file == NULL)
    {
        printf("���ļ�ʧ��...\n");
    }
    else
    {
        printf("�ļ��򿪳ɹ�...\n");

        fprintf(file, "%d\n",temp);
	
        //�ر��ļ���
        fclose(file);
        printf("�ر��ļ��ɹ�...\n");
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
