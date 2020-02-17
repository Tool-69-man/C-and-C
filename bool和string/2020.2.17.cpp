#include<iostream>
#include<string>
//#include<string.h>加个后缀也行
using namespace std;
void fun() {
    string name = "lucy"; 
    int age = 20;
    bool married = false;
    cout << name << endl;
    cout << age << endl;
    if(married){
        cout << "已婚";
    }else{
        cout << "未婚";
    }

	
}
int main() {
    fun();
    return 0;
}