#include<iostream>
#include<string>
using namespace std;

class book
{
public:
	float money;
	string name;
	void	setcontent(string c) {
		this->content = c;
	};
	string getcontent() {
		return content;
	};
	
	book();
	~book();

private:
	string  content="未初始化";
};


int main() {
	book s1;
	s1.money = 69;
	s1.name = "C++_Primer";

	s1.getcontent();
	cout << s1.getcontent() << endl;
	s1.setcontent("666好书好书");
	cout << "====================" << endl;
	cout << s1.name << endl;
	cout << s1.money << endl;
	cout <<s1.getcontent() << endl;
	
	return 0;
}

book::book()
{
}

book::~book()
{
}
