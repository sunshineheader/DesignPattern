#pragma once
#include "AbstractionImplement.h"
class ConcreteImplementB :  public AbstractionImplement {

public:
	ConcreteImplementB();
	virtual~ConcreteImplementB();
	virtual void Operaction() override;

};

