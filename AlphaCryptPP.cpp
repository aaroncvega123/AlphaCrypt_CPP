// AlphaCryptPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Contact.h"
#include "Rotor.h"
#include "Wheel.h"
#include "Reflector.h"
#include "RotorSet.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	RotorSet newSet("684994595494303");
	newSet.printRotorSet();
	system("PAUSE");
    return 0;
}

