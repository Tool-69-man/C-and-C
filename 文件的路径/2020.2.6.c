#include<stdio.h>
int main() {


	FILE* fp = NULL;
	fp = fopen("X:\\�ҵ�Ӧ��.txt","r+");//ע�� ·��Ϊ X:\filename.��׺
	if (NULL == fp) {//       ��Ҫ���   \  ������ \ ת���ַ� ʹ��������    \\ 
		printf("��ʧ��\n");//      ����·�������·��
		exit(EOF);
	}//                              ����·��      ����̷�  C:\\  X:\\    
	else//                           ���·��      ����ֻ�� ��Ŀ�ļ�������
	{
		printf("�򿪳ɹ�\n");//fp==NULL(��)ʧ��
	}


	if (fclose(fp)) {//        �رճɹ����� 0
		printf("FILE close error!\n");
		exit(EOF);
	}
	else
	{
		printf("�رճɹ�\n");
	}
	return 0;
}