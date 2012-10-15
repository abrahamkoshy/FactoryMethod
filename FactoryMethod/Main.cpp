// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcreteCreator.h"


int _tmain(int argc, _TCHAR* argv[])
{
    //insert breakpoints and step through the code to see the flow of operation
    Creator* creator = new ConcreteCreator();
    creator->AnOperation();

    delete creator;

	return 0;
}

