#pragma once
#include "Component.h"
class Decorator : public Component {

public: 
	Decorator(Component * component);
	virtual~Decorator();
	void Operation();
protected:
	Component * m_component;
};

