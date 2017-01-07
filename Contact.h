#include "stdafx.h"

#pragma once

class Contact
{
public:
	Contact(int EN, int EX);
	~Contact();
	void printContact();
	int getEntrance();
	int getExit();
private:
	int entrance;
	int exit;
};

