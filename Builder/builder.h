#ifndef _BUILDER_H_
#define _BUILDER_H_
#include <string>
using namespace std;

class ProductFood;
class Builder    //定义抽象的制作类，含有三个制作的环节和一个返回制作出来的产品方法
{
public:
    virtual ~Builder();
    virtual void BuildCoolDish(const string& buildPara) = 0;
    virtual void BuildDrink(const string& buildPara) = 0;
    virtual void BuildRice(const string& buildPara) = 0;
    virtual ProductFood* GetProductPoint() = 0;
protected:
    Builder();
    ProductFood* food;
private:
};

class ConcreteBuilder1 : public Builder
{
public:
    ConcreteBuilder1();
    ~ConcreteBuilder1();
    void BuildCoolDish(const string& buildPara);
    void BuildDrink(const string& buildPara);
    void BuildRice(const string& buildPara);
    ProductFood* GetProductPoint();
protected:
private:
};

class ConcreteBuilder2 : public Builder
{
public:
    ConcreteBuilder2();
    ~ConcreteBuilder2();
    void BuildCoolDish(const string& buildPara);
    void BuildDrink(const string& buildPara);
    void BuildRice(const string& buildPara);
    ProductFood* GetProductPoint();
protected:
private:
};

#endif