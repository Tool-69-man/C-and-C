#include<stdio.h>
int main() {
	//enum weekday{a=1,b,c=1,d};//ö��  δ��ֵΪ0��1��2��3������  
							  //����ֵ ��һ��Ϊǰһ������1
	//a=3;�÷����󣡣���ö��Ԫ���ǳ��� ���ܸ�ֵ
	//printf("%d %d %d %d\n",a,b,c,d);
	//
	//enum weekday{Sun,Mon,Tue,Wed,Thu,Fri,Sat} day;//dayΪö�ٱ���
	//day = Wed;
	/*printf("%d %d %d %d %d %d %d\n", Sun, Mon, Tue, Wed, Thu, Fri, Sat);
	printf("%d",day);*/

	//enum {e,f,g,h,i,j,k}Jan,Feb,Mar,Apr,May,Jun,Jul;//ֱ�Ӷ���ö�ٱ���
	//printf("%d %d %d %d %d %d %d\n", e, f, g, h, i, j, k);
	//printf("%d %d %d %d %d %d %d\n", Jan, Feb, Mar, Apr, May, Jun, Jul);//���ʼ��
	enum month {Jan, Feb, Mar, Apr, May, Jun, Jul};//�ȶ�������
	enum month a, b, c,d,e,f,g;//�ֿ��������


	return 0;
}