#pragma once
#include "Abstraction.h"
#include "AbstractionImplement.h"
class  AbstractionImplement;

class RefinedAbstraction : public Abstraction {

public:
	RefinedAbstraction(AbstractionImplement * implement);
	~RefinedAbstraction();
	void Operation();
private:
	AbstractionImplement * _implement;

};

