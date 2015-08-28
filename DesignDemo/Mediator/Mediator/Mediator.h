#pragma once
#include <iostream>
#include <string>
#include "Colleague.h"

class Colleague;
class Mediator
{
public:
	virtual~Mediator();
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;
protected:
	Mediator();
};

