#pragma once
#include <iostream>
using namespace std;
class Strategy
{
public:
	Strategy();
	virtual~Strategy();
	virtual void AlgrithmInterface() = 0;

};

