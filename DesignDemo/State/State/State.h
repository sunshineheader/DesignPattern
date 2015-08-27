#pragma once
#include <iostream>
#include "ConcreteContext.h"
using namespace std;

class ConcreteContext;

class State
{
public:
	State();
	virtual~State();
public:
	virtual void OperationInterface(ConcreteContext * context) = 0;
	virtual void OperationChangeState(ConcreteContext * context) = 0;
protected:
	bool ChangeState(ConcreteContext * context,State * state);
};

