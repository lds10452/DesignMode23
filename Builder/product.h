#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class ProductFood
{
public:
    ProductFood();
    ~ProductFood();
    void addFood(string foodName, int price);
    void showFood();
protected:
private:
    vector<string> mFoodName;  //ʳƷ����
    vector<int> mPrice;        //ʳƷ�۸�
};

#endif