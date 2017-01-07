#include "stdafx.h"
#include "RotorSet.h"
#include "Rotor.h"
#include "Reflector.h"
#include "Wheel.h"
#include <vector>

using namespace std;

RotorSet::RotorSet(string seed)
{
	for (int i = 32; i < 126; i++) {
		ASCIIList.push_back(i);
	}
	int intSeed = 0;
	for (int i = 0; i < (int)seed.length() - 1; i++) {
		intSeed += (int)seed[i];
		Wheel w(intSeed);
		rotorList.push_back(w);
	}
	Reflector r(intSeed);
	rotorList.push_back(r);
}

void RotorSet::printRotorSet() {
	for (std::vector<int>::size_type i = 0; i != rotorList.size(); i++) {
		Rotor *r;
		r = &rotorList[i];
		Rotor r2 = *r;
		r2.printContactList();
	}
}


RotorSet::~RotorSet()
{
}
/*
int RotorSet::ascend(int input) {
	for (int i = 0; i < rotorList.size(); i++) {

		for (int k = 0; k < rotorList.at(i).contactList.size(); k++) {

		}
	}
}*/

int RotorSet::descend(int input) {

}

char RotorSet::encryptChar(char input) {

}

string RotorSet::encryptString(string input) {

}