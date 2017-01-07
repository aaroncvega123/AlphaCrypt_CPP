#include "Rotor.h"
#include <vector>
#pragma once
class Wheel : public Rotor
{
public:
	Wheel(int seed);
	~Wheel();
	void printContactList() {
		Rotor::printContactList();
	}
private:
	void buildWheel(int seed);
	
};

