#include<iostream>
#include "prototype.h"
using namespace std;

Prototype::Prototype()
{
	cout << "---Prototype constructor" << endl;
	number = 100;
}
Prototype::~Prototype()
{
}
Prototype* Prototype::Clone() const
{
	return 0;
}
ConcretePrototype::ConcretePrototype()
{
	cout << "---ConcretePrototype constructor" << endl;
}
ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{
	cout << "---ConcretePrototype copy..." << endl;
}
ConcretePrototype::~ConcretePrototype()
{
}
Prototype* ConcretePrototype::Clone() const
{
	cout << "---Clone()" << endl;
	return new ConcretePrototype(*this);
}