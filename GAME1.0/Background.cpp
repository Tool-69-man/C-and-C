#include "Background.h"
#include<iomanip>

void Background::init_Back()
{
	cout << "============================" << endl;
	cout << "==========��ʼ��Ϸ==========" << endl;
	cout << "============================" << endl;
	PC;
}

int Background::choice_mon()
{
	int n=0;
	do
	{
		
		CLS;
		cout << right << "��ѡ����ĵ���" << endl;//����
		cout << setfill('-') << setw(30)<<""<<endl;//���߿�  #include<iomanip> Ϊʲô ""
		cout << "| 1:" << setfill(' ') << setw(7) <<""<< "�������� ��lv  1��|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) <<""<< "  ��ħ   ��lv  5��|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) <<""<< "  ��ʹ   ��lv 10��|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) << ""<<"  ħ��   ��lv 30��|" << endl;
		cout << "| 1:" << setfill(' ') << setw(7) << ""<<"  �ϵ�   ��lv 50��|" << endl;
		cout << setfill('-') << setw(30)<<""<< endl;


		/*cout << "1 :" << "�������� ��lv  1��" << endl;
		cout << "2 :" << "  ��ħ   ��lv  5��" << endl;
		cout << "3 :" << "  ��ʹ   ��lv 10��" << endl;
		cout << "4 :" << "  ħ��   ��lv 30��" << endl;
		cout << "5 :" << "  �ϵ�   ��lv 50��" << endl;*/
		
		cin >> n;
	} while (n<1||n>5);

	return --n;
}

bool Background::challenge()
{
	//while(ture)  ѭ��  ѭ��  ѭ����������������������������������
	while(true){
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
		if (demon.isAive_DM()) {
			demon.atk_eat(man);
			show(demon.name,man,demon);
			if (!man.isAlive())
			{
				man.leveldown();
				if (man.level <= 0) {
					cout << "=========��Ϸʧ��==========" << endl;
					return false;
				}
				return true;
			}
			else
			{
				round++;
				int i = 0;
				for ( i = 0; i < num_sk; i++)
				{
					man.sk[i].use_skill = (man.sk[i].use_skill == 0 ? 0 : man.sk[i].use_skill - 1);
				}
				PC;
				continue;
			}
        }
		else
		{
			if (demon.Lev_DM == 50) {
				cout << "========��ϲͨ��=========" << endl;
				return false;
			}
				man.levelup(demon.Lev_DM);
				return true;
		}
	}
}

void Background::show(int round, Hero man, Monst demon)//չ�ֵڼ��غ�
{//Ӣ�� ���� ������HP��MP���ȼ�
	cout << "���ǵ�" << round+1 << "��!" << endl;
	cout << "Ӣ�ۣ�" << man.name << endl
		<< "level:" << man.level << endl
		<< "HP:" << man.HP << endl
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "����:" << demon.name << endl
		<< "level:" << demon.Lev_DM << endl
		<< "HP:" << demon.HP << endl
		<< "=====================================" << endl;
	PA;
}

void Background::show(string name, Hero man, Monst demom)
{
	//˭��������   ���չ��Ӣ�� ���� ������HP��MP���ȼ�
	cout <<  name << "��������" << endl;
	cout <<  name << "=====================================" << endl;
	cout << "Ӣ�ۣ�" << man.name << endl
		<< "level:" << man.level << endl
		<< "HP:" << man.HP << endl
		<< "MP:" << man.MP << endl
		<< "=====================================" << endl;
	cout << "����:" << demon.name << endl
		<< "level:" << demon.Lev_DM << endl
		<< "HP:" << demon.HP << endl
		<< "=====================================" << endl;
	PC;
}
