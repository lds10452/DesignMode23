#include <iostream>
using namespace std;
#ifdef ADAPTER_OBJECT
#include "adapter_object.h"
int main()
{
	Adaptee* ade = new Adaptee();
	Target* adt = new Adapter(ade);
	adt->Request();

	delete adt;
	delete ade;
	system("pause");
	return 0;
}
#else
#include "adapter_class.h"
int main()
{
	Target* adt = new Adapter();
	adt->Request();

	delete adt;
	adt = NULL;
	system("pause");
	return 0;
}
#endif // ADAPTER_OBJECT