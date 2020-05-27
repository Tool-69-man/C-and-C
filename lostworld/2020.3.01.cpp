#include<iostream>
#include<string>
using namespace std;
class Lostgame {
public:
	string name;
	int level_get;
	int loss_MP;
	int CD;
	int damage;
	int use_skills;

	Lostgame(void) {}
	~Lostgame(void) {}
};
int main() {
	Lostgame ice_make;
	ice_make.name = "绝对零度";
	ice_make.level_get = 1;
	ice_make.damage = 2 * 12;//假设当前等级为2
	ice_make.CD = 1;
	ice_make.loss_MP = 5;

	cout << "绝招     " << ice_make.name      << endl
		<< "获取等级  " << ice_make.level_get << endl
		<< "伤害      " << ice_make.damage    << endl
		<< "冷却时间  " << ice_make.CD        << endl
		<< "耗蓝      " << ice_make.loss_MP   << endl;





	return 0;
}