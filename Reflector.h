#pragma once
#include "Rotor.h"
#include <vector>

using namespace std;

class Reflector : public Rotor
{
public:
	Reflector(int seed);
	~Reflector();
	void printContactList() {
		Rotor::printContactList();
	}
private:
	void generateEntrances();
	vector<int> entrances;
};

