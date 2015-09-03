#pragma once
#include "Prototype.h"

class ConcretePrototype :public Prototype {
public:
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype & concrete_prototype);
	virtual~ConcretePrototype();
	Prototype*clone() const;
};

