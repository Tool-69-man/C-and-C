#include"Background.h"
#include"all.h"
 
int main() {
    //先建立 场景对象 初始化场景
    Background L;
    L.init_Back();
    //建立英雄
    L.man.init_hero();
    //建立状态
    L.state = true;
    //最后一直循环
    while (L.state)
    {
        //初始化我选的怪物
        L.demon.init(L.choice_mon());
        //回合从0开始
        L.round = 0;
        //state接受结果
       L.state = L.challenge();
    }
    return 0;
}