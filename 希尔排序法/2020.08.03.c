#include<stdio.h>
//ϣ�������ǲ�������ı���
//�ȶ�����  ���Ӷ�һֱ�� O(n��3/2�η�)

void shell(int data[],int size) {
	int i = 0;//ɨ�����
	int j = 0;//��λ�Ƚ�Ԫ��
	int k = 1;//��ӡ����
	int tmp = 0;//�洢
	int jmp = 0;//���λ��
	jmp = size / 2;
	while (jmp!=0)
	{
		for (i = jmp; i <=size;i++) {
			tmp = data[i];
			j = i - jmp;
			while (tmp<data[j]&&j>0)
			{
				data[j + jmp] = data[j];
				j -= jmp;
			}
			data[j + jmp] = tmp;
		}
		jmp = jmp / 2;
	}
	printf("\n");
	for ( i = 1; i <=size; i++)
	{
		printf("%2d ",data[i]);
	}

}


int main() {
	int i = 0;
	int data[100] = { 0 };
	int size = 0;
	printf("��������������֣�\n");
	scanf("%d", &size);
	for ( i = 1; i <=size; i++)
	{
		printf("�����%2d������\n",i);
		scanf("%d",&data[i]);
	}
	shell(data,size);

	return 0;
}