#include<stdio.h>
int main() {
	FILE* fp;

	if (fp = fopen("�ҵ�Ӧ��.txt", "r") == NULL) {//filename �ļ���  mode�򿪷�ʽ
	
		printf("�޷�������");
		exit(EOF);//�˳�Ϊ���� ִֹͣ��  ���ز���ϵͳ    EOF = -1

	};
	
	if (fclose(fp)) {//�ر�fp ָ���ļ�
		printf("File close error");
		exit(1);
	}
	//   mode   �򿪷�ʽ
	//   ASCII�ļ� r,rt    ������rb   �ɶ���
	//   ASCII�ļ� w,wt    ������wb   ��д���ļ������� �򴴽����Ѵ��ڣ������
	//   ASCII�ļ� a,at    ������ab   ��ӡ��ļ������� �򴴽����Ѵ��ڣ����ĩ�����
	//   ASCII�ļ� r+,r+t,rt+    ������rb+ ,r+b   �ɶ�д��
	//   ASCII�ļ� w+,w+t,wt+    ������wb+,w+b   �ɶ�д���ļ������� �򴴽����Ѵ��ڣ������
	//   ASCII�ļ� a+,a+t,at+    ������a+b,ab+   �ɶ�����ӡ��ļ������� �򴴽����Ѵ��ڣ����ĩ�����





	return 0;
}