#include <iostream>
#include "abstraction.h"
#include "abstractionimp.h"
using namespace std;

int main()
{
    //Bridgeģʽ�������ʵ�ֱַ����ʵ��
    //ʵ�ֲ���ConcreteAbstractionImplementA
    AbstractionImp* imp = new ConcreteAbstractionImpA();
    //���󲿷�RefinedAbstractionA
    Abstraction* abs = new RefinedAbstraction(imp);
    abs->Operation();

    cout << "-----------------------------------------" << endl;
    AbstractionImp* imp2 = new ConcreteAbstractionImpB();
    Abstraction* abs2 = new RefinedAbstraction(imp2);
    abs2->Operation();

    delete abs;
    delete imp;
    delete abs2;
    delete imp2;
    system("pause");
    return 0;
}