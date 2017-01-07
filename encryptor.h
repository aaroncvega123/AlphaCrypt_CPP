#pragma once
#include "RotorSet.h"

class encryptor
{
public:
	encryptor(int seed);
	~encryptor();
	
private:
	string seedString = "";
	//RotorSet rotorSet(seedString);
};

