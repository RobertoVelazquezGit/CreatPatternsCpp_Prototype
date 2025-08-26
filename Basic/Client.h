#pragma once
#include <iostream>
class Prototype;
class Client
{
	Prototype* prototype;
public:
	Client() : prototype(nullptr) {}

	~Client() {
		std::cout << "[Client] Destructor, freeing set prototype pointer ...\n";
		delete prototype;
	}

	void SetPrototype(Prototype* p);
	void Operation();
};

