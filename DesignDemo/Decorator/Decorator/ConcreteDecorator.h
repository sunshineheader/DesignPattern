#pragma once
#include <iostream>
#include "Decorator.h"
class ConcreteDecorator : public Decorator {

public:
	ConcreteDecorator(Component * component );
	~ConcreteDecorator();
	void Operation();
	void addBehavior();
};

