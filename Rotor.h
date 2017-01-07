#include "stdafx.h"
#pragma once
#include "Contact.h"
#include <vector>

using namespace std;

class Rotor
{
public:
	Rotor();
	~Rotor();
	void printContactList();
	void printToBeUsed();
	vector<int> toBeUsed;
	vector<Contact> contactList;
	vector<int> exits;
	void generateExits(int seed);
	void fillToBeUsed();
private:
	
	int size = 94;
};

