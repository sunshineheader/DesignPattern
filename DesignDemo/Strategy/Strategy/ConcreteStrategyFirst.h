#pragma once
#include "Strategy.h"
class ConcreteStrategyFirst :
	public Strategy
{
public:
	ConcreteStrategyFirst();
	virtual~ConcreteStrategyFirst();
	void AlgrithmInterface();
};

