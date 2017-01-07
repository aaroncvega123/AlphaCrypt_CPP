#include "stdafx.h"
#include "encryptor.h"
#include "RotorSet.h"
#include <string>

using namespace std;

encryptor::encryptor(int seed)
{
	seedString = to_string(seed);
}


encryptor::~encryptor()
{
}
