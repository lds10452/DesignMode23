#include <iostream>
#include "decorator.h"
using namespace std;

int main()
{
	Component* com = new ConcreteComponent();
	Decorator* dec = new ConcreteDecorator(com);
	dec->Operation();

	Decorator* decB = new ConcreteDecoratorB(com);
	decB->Operation();

	delete dec;
	delete decB;
	if (com)  delete com;
	system("pause");
	return 0;
}