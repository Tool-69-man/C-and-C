#include<iostream>
#include<string>
using namespace std;
int main() {
	int a;
	while (1)
	{
		cout << "������a" << endl;
		cin >> a;

		if (!cin)
		{
			cout << "�������" << endl;
			cin.clear(a);
			cin.sync();
		}
		break;
	}
	cout << "a="<<a<<endl;

	int b=1;
	cout << "������b" << endl;
	cin >> b;
	cout <<"b="<<b;

	return 0;
}