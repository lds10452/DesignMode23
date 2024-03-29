#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

class AbstractProductA;
class AbstractProductB;
class AbstractFactory
{
public:
    virtual ~AbstractFactory();
    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;
protected:
    AbstractFactory();
    AbstractProductA* pointA1;
    AbstractProductA* pointA2;
    AbstractProductB* pointB1;
    AbstractProductB* pointB2;
private:
};

class ConcreteFactory1 : public AbstractFactory
{
public:
    ConcreteFactory1();
    ~ConcreteFactory1();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
protected:
private:
};

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();
    ~ConcreteFactory2();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
protected:
private:
};

#endif