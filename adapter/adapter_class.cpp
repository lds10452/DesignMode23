#include <iostream>
#include "adapter_class.h"
using namespace std;
#ifndef ADAPTER_OBJECT
Target::Target()
{
}

Target::~Target()
{
}

void Target::Request()
{
    cout << "Target::Request" << endl;
}
Adaptee::Adaptee()
{
}
Adaptee::~Adaptee()
{
}
void Adaptee::SpecificRequest()
{
    cout << "Adaptee::SpecificRequest" << endl;
}
Adapter::Adapter()
{
}
Adapter::~Adapter()
{
}
void Adapter::Request()
{
    cout << "---Adapter interface---" << endl;
    this->SpecificRequest();
}
#endif // ADAPTER_OBJECT