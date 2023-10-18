#ifndef _DECORATOR_H_
#define _DECORATOR_H_

//Component�����࣬����������Ľӿ�
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
//Decorator��װ�γ����࣬�̳���Component
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
//ConcreteDecorator���Ǿ����װ�ζ���֮һ���𵽸�Component���ְ��Ĺ���
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
//ConcreteDecorator���Ǿ����װ�ζ���֮�����𵽸�Component�ٴ����ְ��Ĺ���
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