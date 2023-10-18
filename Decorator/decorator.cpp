#include <iostream>
#include "decorator.h"
using namespace std;

Component::Component()
{
}

Component::~Component()
{
}

void Component::Operation()
{
}

ConcreteComponent::ConcreteComponent()
{
}

ConcreteComponent::~ConcreteComponent()
{
}

void ConcreteComponent::Operation()
{
	cout << "---origin:ConcreteComponent::Operation..." << endl;
}
Decorator::Decorator(Component* com)
{
	this->_com = com;
}

Decorator::~Decorator()
{
}

void Decorator::Operation()
{
}

ConcreteDecorator::ConcreteDecorator(Component* com)
	: Decorator(com)
{
}

ConcreteDecorator::~ConcreteDecorator()
{
}

void ConcreteDecorator::Operation()
{
	cout << "ConcreteDecorator::Operation..." << endl;
	_com->Operation();
	this->AddedBehavior();
}

void ConcreteDecorator::AddedBehavior()
{
	cout << "+++addition:ConcreteDecorator::AddedBehavior..." << endl;
}
ConcreteDecoratorB::ConcreteDecoratorB(Component* com)
	: Decorator(com)
{
}
ConcreteDecoratorB::~ConcreteDecoratorB()
{
}
void ConcreteDecoratorB::Operation()
{
	cout << "ConcreteDecoratorB::Operation..." << endl;
	_com->Operation();
	this->AddedBehaviorB();
}

void ConcreteDecoratorB::AddedBehaviorB()
{
	cout << "+++additionB:ConcreteDecorator::AddedBehaviorB..." << endl;
}