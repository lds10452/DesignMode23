#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

class Builder;
class ProductFood;
class Director      //ָ���ߣ����������ɫ������þ��彨���߽�ɫ�Դ�����Ʒ���󡣴˴�������Ա
{
public:
    Director();
    ~Director();
    ProductFood* foodInfoPoint(char ch);
protected:
private:
    Builder* _bld;
};

#endif