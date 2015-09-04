#pragma once
#include "AbstractionImplement.h"
class ConcreteImplementA : public AbstractionImplement {

public:
	ConcreteImplementA();
	virtual~ConcreteImplementA();
	virtual void Operaction() override;
};

