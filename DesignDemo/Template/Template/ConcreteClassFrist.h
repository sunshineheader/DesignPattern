#pragma once
#include <iostream>
#include "AbstractClass.h"
using namespace std;
class ConcreteClassFrist : public AbstractClass {

public:
	ConcreteClassFrist();
	~ConcreteClassFrist();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

