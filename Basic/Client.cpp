#include <iostream>
#include "Client.h"
#include "Prototype.h"
void Client::Operation() {
	auto p = prototype->Clone();
	// .. Some operation
	std::cout << "[Client] Operation, freeing cloned p pointer ...\n";
	delete p;
}

void Client::SetPrototype(Prototype* p) {
	if (prototype != p) {
		if (prototype != nullptr) {
			std::cout << "[Client] SetPrototype, freeing previous prototype pointer 0x" << std::hex << prototype << " ...\n";
		}
		delete prototype;
		prototype = p;
	}
}

