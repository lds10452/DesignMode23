#include <iostream>
#include "builder.h"
#include "product.h"
#include "director.h"
using namespace std;

int main()
{
    Director* dt = new Director();
    //������Ҫ�ͻ��˵���Ҫ����
    char ch;
    //�ͻ�������������Ҫ�����ײ�A��B
    for (int i = 0; i < 2; i++) {
        cin >> ch;
        cout << "-------------------" << endl;
        dt->foodInfoPoint(ch)->showFood();
    }
    delete dt;
    system("pause");
    return 0;
}