#include <iostream>
#include "component.h"
#include "composite.h"
#include "leaf.h"
using namespace std;

int main()
{
	//������Ҷ��Leaf����Composite����pRoot��pCom��ʵ����Operation�ӿڣ����Կ���һ�¶Դ���ֱ�ӵ���Operation()
	//�����ˡ�ʹ���û��Ե����������϶����ʹ�þ���һ���ԡ�
	Component* lf = new Leaf();
	//ִ��Ҷ��Operation����
	lf->Operation();
	Component* lf2 = new Leaf();

	Composite* com = new Composite();
	//��϶������Ҷ�ӽڵ�
	com->Add(lf);
	com->Add(lf2);
	//ִ����϶���Operation����
	com->Operation();

	//��ȡ��϶����еĽڵ�
	Component* ll = com->GetChild(0);
	ll->Operation();

	delete com;
	delete lf;
	delete lf2;
	system("pause");
	return 0;
}