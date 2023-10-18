#ifndef _COMPONENT_H_
#define _COMPONENT_H_

//Component������࣬Ϊ����еĶ��������ӿ�,�������๲�нӿڵ�ȱʡ��Ϊ(�������Add,Remove,GetChild����)
class Component
{
public:
	virtual ~Component();
public:
	virtual void Operation() = 0;
	virtual void Add(const Component&);
	virtual void Remove(const Component&);
	virtual Component* GetChild(int);
protected:
	Component();
private:
};

#endif