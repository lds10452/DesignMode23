#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include <vector>
#include <iostream>
#include "component.h"
using namespace std;

//Composite���������������
class Composite : public Component
{
public:
	Composite();
	~Composite();
public:
	//ʵ�ֵĽӿ�
	void Operation();
	void Add(Component* com);
	void Remove(Component* com);
	Component* GetChild(int index);
protected:
private:
	//�������vector�����������
	vector<Component*>comVec;
};

#endif