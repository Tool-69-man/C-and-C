#include<iostream>
#include<string>
using namespace std;
#include<fstream>//����ifstream��ofstream��fstream


int main() {
	ofstream save("save.txt");//��������   save�Ǿ��
	save << "rule the world" << endl;
	string strMy = "I can do this !";
	save << strMy << endl;
	save.close();

	return 0;
}