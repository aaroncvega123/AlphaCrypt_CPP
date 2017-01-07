#include "stdafx.h"
#include "Contact.h"
#include <iostream>

using namespace std;


Contact::Contact(int EN, int EX)
{
	entrance = EN;
	exit = EX;
}


Contact::~Contact()
{
}

void Contact::printContact() {
	cout << entrance << " " << exit << endl;
}

int Contact::getEntrance() {
	return entrance;
}

int Contact::getExit() {
	return exit;
}
