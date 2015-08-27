#pragma once
#include "State.h"
#include "ConcreteStateSecond.h"
class ConcreteStateFirst :
	public State
{
public:
	ConcreteStateFirst();
	virtual~ConcreteStateFirst();
public:
	void OperationInterface(ConcreteContext * context);
	void OperationChangeState(ConcreteContext * context);
};

