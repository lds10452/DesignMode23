#include "factory.h"
#include "product.h"
#include <iostream>
using namespace std;

int main()
{
    Factory* fac = new ConcreteFactory();
   // ConcreteFactory ls;
    //ConcreteFactory��ʱͨ�����������������״���������һ��Product������
    fac->setFactoryMethod(3);
    Product* pro = fac->CreateProduct();

    if (pro) {
        delete pro;
        pro = NULL;
    }
    if (fac) {
        delete fac;
        fac = NULL;
    }
    system("pause");
    return 0;
}