#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	string pubname="����";
	A() {};
	~A() {};
protected:
	string proname = "����";
private:
	string priname = "����";
};
class B :public A
{
public:
	B() {	
		pubname = "�Ǻ�";
		proname = "Ϊʲô��ô����";
		//priname = "ʧȥ�˶���";//priname �Ѿ��̳� ���޷�����
	}
};
class C :protected B 
{
public:
	C() {
		pubname = "������ô����ҵ�ʧ��";//pubname �Ѿ���ɱ���Ȩ�� �����޷�����
		proname = "��֮ǰ�Ķ���������������";
		//priname = "������ע����ϣ��";//
	}
};

//���� ��Ԫ��   �����̳к�   ��ɱ���Ȩ��
//˽��<-����<-����  Ȩ�޵͵�Ȩ�޸� ת��

int main() {
	A s1;
	cout << s1.pubname << endl;
	B s2;
	cout << s2.pubname << endl;
	C s3;
	//s3.pubname="��ֻ����������������������Ȥ";�Ѿ���ɱ���Ȩ��
	return 0;
}