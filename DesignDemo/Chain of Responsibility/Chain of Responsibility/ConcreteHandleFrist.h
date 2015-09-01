#pragma once
#include "Handle.h"
#include<iostream>
class ConcreteHandleFrist :
	public Handle
{
public:
	ConcreteHandleFrist();
	ConcreteHandleFrist(Handle* succ);
	~ConcreteHandleFrist();
	void HandleRequest();
};

