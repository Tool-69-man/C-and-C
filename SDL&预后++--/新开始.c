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
	printf("%d\n,%d\n",a--,a);//�����Ըı䡰��/WX-�������ǣ�������
	int b = 2;
	printf("%d\n%d", b,--b);//������Ϊb��++b˳��𰸴�
	return 0;//Ŷ�����Ժ��˲��ǽ����ǡ��ġ��񡱣�ֻҪɾȥSDL����������
	//visual studio�����˴���Դ�ļ�֮����Դ������и�Ϊ�񣨲����ֶ�����񣩡�12��27��ʵ�顷
	//��Ȼֱ��ɾ��Ҳ���ԡ�12��27��ʵ�顷
	scanf_s("%d",&a);//����sdlҲ������scanf���_s��12��27��ʵ�顷
	printf("%d", a);

	scanf_s("%d", &a);
	printf("%d", a);
}