#include"Black.h"
#include"all.h"

int main() {
    //�Ƚ��� �������� ��ʼ������
    Black L;
    L.init();
    //����Ӣ��
    L.man.init();
    //����״̬
    L.state = true;
    //���һֱѭ��
    while (L.state)
    {
        //��ʼ����ѡ�Ĺ���
        L.demon.init(L.choice());
        //�غϴ�0��ʼ
        L.round = 0;
        //state���ܽ��
        L.state = L.challenge();
    }
    return 0;
}