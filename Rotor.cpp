#include "stdafx.h"
#include "Rotor.h"
#include <iostream>
#include <vector>

using namespace std;

Rotor::Rotor()
{

}

void Rotor::fillToBeUsed() {
	for (int i = 0; i < size; i++) {
		toBeUsed.push_back(i);
	}
}

void Rotor::generateExits(int seed) {
	int iterator = seed;
	int size = (int)toBeUsed.size();
	while (size > 0) {
		if (iterator < size) {
			exits.push_back(toBeUsed[iterator]);
			toBeUsed.erase(toBeUsed.begin() + iterator);
			size = (int)toBeUsed.size();
			iterator += seed;
		}
		else {
			iterator = iterator - size;
		}
	}
}


Rotor::~Rotor()
{
}

void Rotor::printContactList() {
	for (std::vector<int>::size_type i = 0; i != Rotor::contactList.size(); i++) {
		cout << Rotor::contactList[i].getEntrance() << " ";
	}
	cout << endl;
	for (std::vector<int>::size_type i = 0; i != Rotor::contactList.size(); i++) {
		cout << Rotor::contactList[i].getExit() << " ";
	}
	cout << endl;
}

void Rotor::printToBeUsed() {
	for (int i = 0; i < size; i++) {
		cout << toBeUsed[i] << " ";
	}
}