#pragma once
#include "State.h"
#include "ConcreteStateFirst.h"
class ConcreteStateSecond :
	public State
{
public:
	ConcreteStateSecond();
	virtual~ConcreteStateSecond();
public:
	void OperationInterface(ConcreteContext * context);
	void OperationChangeState(ConcreteContext * context);
};

