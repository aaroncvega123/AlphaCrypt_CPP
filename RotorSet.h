#pragma once
#include <vector>
#include <string>
#include "Rotor.h"
#include "Wheel.h"
#include "Reflector.h"

class RotorSet
{
public:
	RotorSet(string seed);
	~RotorSet();
	void printRotorSet();
	vector<Rotor> rotorList;
	char encryptChar(char input);
	string encryptString(string input);
private:
	vector<int> ASCIIList;
	int ascend(int input);
	int descend(int input);
};

