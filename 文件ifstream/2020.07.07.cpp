#include<fstream>
#include<string>
#include <iostream>
using namespace std;
int main() {
	ifstream openSave("C:\\Users\\28215\\source\\repos\\c++д���ļ�\\save.txt");
	char c;
	while (!openSave.eof())
	{
		openSave.get(c);
		cout << c;
	

	}
	openSave.close();



	return 0;
}