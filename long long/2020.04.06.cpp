#include<iostream>
#include<string>
using  namespace std;
int main() {
	//int sum = 1;
	 long long int sum = 1;
	int n(1);
	while (n<=30)
	{
		sum *= n;
		cout<< n<<"�Ľ׳�="<<sum<<endl;
		n++;
		
	}

	//int ������9~10λ��
	//long long int ������19~20λ��
	return 0;
}