#ifndef _DECORATOR_H_
#define _DECORATOR_H_

//Component抽象类，定义该类对象的接口
class Component
{
public:
    virtual ~Component();
    virtual void Operation() = 0;
protected:
    Component();
private:
};
class ConcreteComponent : public Component
{
public:
    ConcreteComponent();
    ~ConcreteComponent();
    void Operation();
protected:
private:
};
//Decorator：装饰抽象类，继承自Component
class Decorator : public Component
{
public:
    Decorator(Component* com);
    virtual ~Decorator();
    void Operation();
protected:
    Component* _com;
private:
};
//ConcreteDecorator就是具体的装饰对象之一，起到给Component添加职责的功能
class ConcreteDecorator : public Decorator
{
public:
    ConcreteDecorator(Component* com);
    ~ConcreteDecorator();
    void Operation();
    void AddedBehavior();
protected:
private:
};
//ConcreteDecorator就是具体的装饰对象之二，起到给Component再次添加职责的功能
class ConcreteDecoratorB :public Decorator
{
public:
    ConcreteDecoratorB(Component* com);
    ~ConcreteDecoratorB();
    void Operation();
    void AddedBehaviorB();
protected:
private:
};

#endif