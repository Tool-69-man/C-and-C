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
		cout<< n<<"的阶乘="<<sum<<endl;
		n++;
		
	}

	//int 最多承受9~10位数
	//long long int 最多承受19~20位数
	return 0;
}