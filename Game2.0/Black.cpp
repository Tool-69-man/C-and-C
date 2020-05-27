#include "Black.h"

void Black::init()
{
	cout << endl << endl << endl;
	cout << "``````````````````````````" << endl;
	cout << "````````������Ϸ``````````" << endl;
	cout << "``````````````````````````" << endl;
	PC;
}

int Black::choice()
{ 
	int n = 0;
	do
	{
		
		cout << "����������Ҫ��ս�ĵ���" << endl;
		cout << "//////////////////////////////" << endl<<endl;
		cout << "1 :" << "    �粼�� ��lv  1��" << endl<<endl;
		cout << "===============================" << endl<<endl;
		cout << "2 :" << "    ʳʬ�� ��lv  5��" << endl << endl;
		cout << "*******************************" << endl << endl;
		cout << "3 :" << "     ��ħ  ��lv 10��" << endl << endl;
		cout << "+++++++++++++++++++++++++++++++" << endl << endl;
		cout << "4 :" << "     ����  ��lv 30��" << endl << endl;
		cout << "��������������������������������" << endl << endl;
		cout << "5 :" << "     ħ��  ��lv 50��" << endl << endl;
		cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
		cin >> n;
		
	} while (n < 1 || n>5);
	return n - 1;
}

bool Black::challenge()
{
	//while(ture)  ѭ��  ѭ��  ѭ����������������������������������
	while (true) {
		//��չʾ�غ���Ϣ
		show(round, man, demon);
		//Ӣ�ۻغϣ�1ѡ�� 2���� 3չʾӢ��  ����
		man.choice_sk();
		man.attack(demon);
		show(man.name, man, demon);
		//�жϹ���״̬     
		//  1.���� ���޹���  2.���� ���ж��Ƿ������BOSS   ��Ϸʤ��or�������� 
		//���޻غ� 
		//�ж�Ӣ��״̬ 1.���� ����  ���ж��Ƿ�   ������gg  2.���ż���   ��CD
		if (demon.Alive()) {
			demon.attack(man);
			show(demon.name, man, demon);
			if (!man.Alive())
			{
				man.leveldown();
				if (man.level <= 0) {
					cout << "=========��Ϸʧ��==========" << endl;
					PA;
					return false;
				}
				return true;
			}
			else
			{
				round++;
				int i = 0;
				for (i = 0; i < MAX_NUM; i++)
				{
					man.sk[i].action = (man.sk[i].action == 0 ? 0 : man.sk[i].action - 1);
				}
				PC;
				continue;
			}
		}
		else
		{
			if (demon.level == 50) {
				cout << "========��ϲͨ��=========" << endl;
				PA;
				return false;
			}
			man.levelup(demon.level);
			return true;
		}
	}
}

void Black::show(int round, Hero man, Monst demon)//չ�ֵڼ��غ�
{//Ӣ�� ���� ������HP��MP���ȼ�
	CLS;
	cout << endl << endl << endl;
	cout<< "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
	cout << "��" << round + 1 << "��!" << endl;
	cout << "||||||||||||||||||||||||||||||||||" << endl;
	cout << "Ӣ�ۣ�" << man.name 
		<< "		" 
		<< "level:" << man.level << endl
		<< "=====================================" << endl
		<< "HP:" << man.HP 
		<< "			" 
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "����:" << demon.name 
		<< "		" 
		<< "level:" << demon.level << endl
		<< "=====================================" << endl
		<< "HP:" << demon.HP << endl
		<< ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	PC;
}

void Black::show(string name, Hero man, Monst demom)
{

	//˭��������   ���չ��Ӣ�� ���� ������HP��MP���ȼ�
	cout << endl << endl << endl;
	cout << name << "��������" << endl
		<< "=====================================" << endl;
	cout << "Ӣ�ۣ�" << man.name 
		<< "			" 
		<< "level:" << man.level << endl
		<< "=====================================" << endl
		<< "HP:" << man.HP 
		<< "			" 
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "����:" << demon.name 
		<< "			" 
		<< "level:" << demon.level<< endl
		<< "=====================================" << endl
		<< "HP:" << demon.HP << endl
		<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
	
}
