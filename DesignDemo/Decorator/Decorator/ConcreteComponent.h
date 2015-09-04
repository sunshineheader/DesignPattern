#pragma once
#include <iostream>
#include "Component.h"
class ConcreteComponent : public Component {

public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operation();
};

