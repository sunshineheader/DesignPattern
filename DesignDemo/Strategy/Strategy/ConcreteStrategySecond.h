#pragma once
#include "Strategy.h"
class ConcreteStrategySecond :
	public Strategy
{
public:
	ConcreteStrategySecond();
	virtual~ConcreteStrategySecond();
	void AlgrithmInterface();
};

