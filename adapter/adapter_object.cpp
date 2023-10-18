#include <iostream>
#include "adapter_object.h"
using namespace std;
#ifdef ADAPTER_OBJECT

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
Adapter::Adapter(Adaptee* ade)
{
    _ade = ade;
}
Adapter::~Adapter()
{
}
void Adapter::Request()
{
    cout << "---Adapter interface---" << endl;
    _ade->SpecificRequest();
}

#endif // ADAPTER_OBJECT