#include "factory.h"
#include "product.h"
#include <iostream>
using namespace std;

int main()
{
    Factory* fac = new ConcreteFactory();
   // ConcreteFactory ls;
    //ConcreteFactory延时通过决定参数决定到底创建具体哪一个Product的子类
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