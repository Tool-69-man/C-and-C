#include<stdio.h>
void fun1(int *x,int *y) {//�����ﵽ�˽�������     �β�Ӱ��  ʵ��
	//&xΪ aaa{1}    &y  Ϊ  bbb {2}   
	int temp = *x;//temp ��ָ��     &tempΪ ttt{1}
	*x = *y;//&xΪaaa{2}
	*y = temp;//temp��ֵ��&y bbb{1}        ֱ�Ӱ����ֽ���   
	printf("x=%d,y=%d\n",*x,*y);//&xΪaaa{2}   &yΪbbb{1}
}
void fun2(int *o,int *p) {
	//&o Ϊccc{3}    &p Ϊddd{4}      &temp{NULL}  XXX�޷���ȡ�ڴ�
	int* temp = o; //&tempΪ ccc{3}     �ββ�Ӱ��  ʵ��
	o = p;// &oΪddd{4}      ��ַ����
	p = temp;// &pΪccc{3}              ָ�����仯���ѣ�����û��
	printf("o=%d,p=%d\n", *o, *p);//&oΪddd{4}  &pΪccc{3}     
}
int main() {
	int a = 1, b = 2,c=3,d=4;
	int* p = &a;//a=1    &a  aaa    p=aaa  *p=1
	
	/*   ���õ�ַ ��������
	�� &a Ϊ   aaa{2}
	�� &b Ϊ   bbb{1}
	�� &c Ϊ   ccc{3}
	�� &d Ϊ   ddd{4}
	*/

	fun1(&a, &b);
	fun2(&c, &d);
	/*   ��ַ    ��ַ�仯���
	 &a Ϊ   aaa{1}
	 &b Ϊ   bbb{2}    a,b��ַ�����ֽ���
	 &c Ϊ   ccc{3}
	 &d Ϊ   ddd{4}     
	*/
	printf("a=%d,b=%d\n",a,b);//a=2   b=1    fun1  a,b����
	printf("c=%d,d=%d\n",c,d);//c=3    d=4     fun2  c,d δ����
	return 0;
}