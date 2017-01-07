#include "stdafx.h"
#include "Wheel.h"
#include "Rotor.h"


Wheel::Wheel(int seed) : Rotor()
{
	Rotor::fillToBeUsed();
	Rotor::generateExits(seed);
	for (std::vector<int>::size_type i = 0; i != Rotor::exits.size(); i++) {
		Contact c((int)i, exits[i]);
		Rotor::contactList.push_back(c);
	}
}


Wheel::~Wheel()
{
}

void Wheel::buildWheel(int seed) {
	
}
