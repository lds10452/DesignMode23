#ifndef _LEAF_H_
#define _LEAF_H_
#include "component.h"

//Leaf��Ҷ�ӽ��,Ҳ���ǲ�����������Ľ���࣬���Բ���ʵ��Add��Remove��GetChild�ȷ���
class Leaf : public Component
{
public:
	Leaf();
	~Leaf();
	//ֻʵ��Operation�ӿ�
	void Operation();
protected:
private:
};

#endif