#include<iostream>
using namespace std;
//int main() {
//	int n(-15);
//	int num = 0;
//	int i(0);
////先判断n是否为0
//if(num==0){
//return 0;
//}
//	while (i<32)
//	{
//		if ((n&1)==1) {
//			num++;
//		}
//		n >>= 1;//n>>1  只是将n表示 n 2进制数向右 移动1位   并未赋值
//		i++;//请用  位运算复合赋值运算符  n >>=1   或   n=n>>1
//
//	}
//	
//	cout << num;
//	return 0;
//}

//上述方法只能用正整数   因为对负数  的原码移动   左边只会补充1
//15   输出 4            -15   输出29

//那么我们只改动   i  使i移动

int main() {
	int n(-15);
	int i(1);
	int num = 0;

	while (i!=0)
	{
		if ((i&n)==i) {
			num++;
		}
		i  <<= 1;
	}
	cout << num;
	return 0;
}