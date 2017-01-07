#include "stdafx.h"
#include "Reflector.h"


Reflector::Reflector(int seed)
{
	Rotor::fillToBeUsed();
	Rotor::generateExits(seed);
	generateEntrances();
	for (std::vector<int>::size_type i = 0; i != Rotor::exits.size(); i++) {
		Contact c(entrances[i], exits[i]);
		Rotor::contactList.push_back(c);
	}
}

void Reflector::generateEntrances() {
	for (unsigned int i = 0; i < exits.size(); i += 2) {
		entrances.push_back(exits[(int)i + 1]);
		entrances.push_back(exits[(int)i]);
	}
}


Reflector::~Reflector()
{
}
