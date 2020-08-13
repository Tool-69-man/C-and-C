#include<iostream>
#include<string>
using namespace std;
#include<fstream>//包括ifstream，ofstream及fstream


int main() {
	ofstream save("save.txt");//创建对象   save是句柄
	save << "rule the world" << endl;
	string strMy = "I can do this !";
	save << strMy << endl;
	save.close();

	return 0;
}