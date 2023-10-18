#include <iostream>
#include "prototype.h"
using namespace std;

int main()
{
	Prototype* p_one = new ConcretePrototype();
	cout << "before clone:" << p_one->number << endl;
	Prototype* p_two = p_one->Clone();
	cout << "clone:" << p_two->number << endl;
	p_two->number = 200;

	cout << "----------------------" << endl;
	cout << "origin:" << p_one->number << endl;
	cout << "clone:" << p_two->number << endl;
	delete p_one;
	delete p_two;
	system("pause");
	return 0;
}