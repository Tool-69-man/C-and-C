#include<stdio.h>
int main() {
	FILE* fp;
	/*if ((fp = tmpfile()) == NULL) {
		printf("creat temp file failed!");
		exit(EOF);
	}//                                            �����ɹ�
*/        

	char ch, * fn, str[255];
	fn = tmpnam(str);
	printf("%s\n",str);
	printf("%s\n",fn);

	//tmpfile()���� �� ��ʱ�ļ��� ��  tmpnam() ��������ʱ�ļ��� ��ͬ
	// ����  tmpnam  �رգ�fclose����������ʱ�� �Զ�ɾ��

	return 0;
}