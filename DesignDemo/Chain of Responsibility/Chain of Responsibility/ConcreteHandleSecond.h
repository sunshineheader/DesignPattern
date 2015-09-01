#pragma once
#include "Handle.h"
#include <iostream>
class ConcreteHandleSecond :
	public Handle
{
public:
	ConcreteHandleSecond();
	ConcreteHandleSecond(Handle * succ);
	~ConcreteHandleSecond();
	void HandleRequest();
};

