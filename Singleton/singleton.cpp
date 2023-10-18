#include <iostream>
#include "singleton.h"
using namespace std;

Singleton* Singleton::_instance = NULL;

Singleton::Singleton()
{
    cout << "Singleton constructor" << endl;
}
Singleton::~Singleton()
{
    cout << "Singleton destructor" << endl;
}
void Singleton::DestoryInstance()
{
    cout << "---DestoryInstance" << endl;
    if (_instance) {
        delete _instance;
        _instance = NULL;
    }
}
Singleton* Singleton::GetInstance()
{
    cout << "---GetInstance" << endl;
    if (_instance == NULL) {
        cout << "------new Singleton()" << endl;
        _instance = new Singleton();
    }
    else {
        cout << "------not new Singleton()" << endl;
    }
    return _instance;
}