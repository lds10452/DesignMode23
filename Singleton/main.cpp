#include <iostream>
#include "singleton.h"
using namespace std;

int main()
{
    Singleton* sign = Singleton::GetInstance();
    Singleton* sign2 = Singleton::GetInstance();

    Singleton::DestoryInstance();
    system("pause");
    return 0;
}