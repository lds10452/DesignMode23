#include <iostream>
#include "builder.h"
#include "product.h"
using namespace std;

Builder::Builder()
{
	food = NULL;
}

Builder::~Builder()
{
	if (food) {
		delete food;
		food = NULL;
	}
}

ConcreteBuilder1::ConcreteBuilder1()
{
	food = new ProductFood();
}

ConcreteBuilder1::~ConcreteBuilder1()
{
}
//�ײ�A��������10������11������12���ܹ�33Ԫ
void ConcreteBuilder1::BuildCoolDish(const string& buildPara)
{
	cout << "A:CoolDish have finished" << endl;
	food->addFood(buildPara, 10);
}

void ConcreteBuilder1::BuildDrink(const string& buildPara)
{
	cout << "A:Drink have finished" << endl;
	food->addFood(buildPara, 11);
}

void ConcreteBuilder1::BuildRice(const string& buildPara)
{
	cout << "A:Rice have finished" << endl;
	food->addFood(buildPara, 12);
}

ProductFood* ConcreteBuilder1::GetProductPoint()
{
	return food;
}

ConcreteBuilder2::ConcreteBuilder2()
{
	food = new ProductFood();
}

ConcreteBuilder2::~ConcreteBuilder2()
{
}
//�ײ�B��������20������21������22���ܹ�63Ԫ
void ConcreteBuilder2::BuildCoolDish(const string& buildPara)
{
	cout << "B:CoolDish have finished" << endl;
	food->addFood(buildPara, 20);
}

void ConcreteBuilder2::BuildDrink(const string& buildPara)
{
	cout << "B:Drink have finished" << endl;
	food->addFood(buildPara, 21);
}

void ConcreteBuilder2::BuildRice(const string& buildPara)
{
	cout << "B:Rice have finished" << endl;
	food->addFood(buildPara, 22);
}

ProductFood* ConcreteBuilder2::GetProductPoint()
{
	return food;
}