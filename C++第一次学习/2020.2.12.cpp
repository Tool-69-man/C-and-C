#include<iostream>//Ϊʲô����#include<iostream.h>


//using namespace std;

//C++ ������ע��   ˵������  ����  ��;  ��дʱ��
//���������ڼ����ۼӺ�
void main() {
	const int num = 10;//const ��C++�ṩ����һ�� ������ų�������
	                    //#define ͬ������    const ��ָ������
	int i = 0;
	int sum(0);//C++�����ӵ� ��ʼ������     ��sum  ��ʼ��Ϊ0
	while (i <= num)
	{
		sum += i++;
	}
	/*cout << '\n';
	cout << '\n'<<sum<<sum;
	cout << '\n';
	cout << sum;*/
	std::cout << '\n';
	std::cout << '\  a';//  'a'��ȻΪa ����  '\ a'��� 8289
	std::cout << '\n';
	std::cout << "\ a";//   "a"��ȻΪ   "\ a"  �����  �ո�a
	std::cout << '\n';
	std::cout << sum<<'12';//'12'   ����ʾ12594   ÿ����ո����һ������
	std::cout << '\n';
	std::cout << sum<<'a';
	std::cout << '\n';
	std::cout << ' ';//һ�¿ո��Ϊ�ո�
	std::cout << 1;
	std::cout << " ";
	std::cout << 1;
	std::cout << '\ ';
	std::cout << 1;
	std::cout << "\ ";
	std::cout << 1;
	//std::cout<< sum;/*���sum    ��������  û��  std::  

 //    VS ��ʾ �����ַ���    ��� using namespace std; 
	//                       ��ʹ��  std::
	//		    ͬʱʹ����Ӱ��
 //              cout ��� �� ���������<< �Ҳ����� �������Ļ
 //              cout ������ << ����   */
	//cout << sum;

}