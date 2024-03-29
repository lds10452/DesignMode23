#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
using namespace std;
class Singleton
{
public:
    static Singleton* GetInstance();
    static void DestoryInstance();
protected:
    Singleton();
    ~Singleton();
private:
    static Singleton* _instance;
};

#endif