#pragma once
#include <iostream>
#include "AbstractClass.h"
using namespace std;
class ConcreteClassSecond : public AbstractClass {

public:
	ConcreteClassSecond();
	~ConcreteClassSecond();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

