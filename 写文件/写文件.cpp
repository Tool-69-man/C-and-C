// 写文件.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
using namespace std;
int main(int**arge,int age)
{
    fstream ofe("text.txt",ios::in|ios::out);
   /* ifstream in("text.txt",ios::in);*/
   /* string b;
    cin >> b;
    ofe <<b << endl;*/

    string a;
    while (!ofe.eof())
    {
        ofe >> a;
        cout << a << endl;
    }
    
    

    ofe.close();
    return 0;
}


