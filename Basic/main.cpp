
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#include <iostream>
#include "Client.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Client c;
	c.SetPrototype(new ConcretePrototype1{});
	c.Operation();

	c.SetPrototype(new ConcretePrototype2{});
	c.Operation();
}

