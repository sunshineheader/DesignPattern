#pragma once
#include <iostream>
#include "AbstractProductA.h"
#include "AbstractProductB.h"
class AbstractFactory {
public:
	virtual~AbstractFactory();
public:
	// AbstractProductA return A1 B1
	virtual AbstractProductA * CreateProductA() = 0;
	// AbstractProductB return A2 B2
	virtual AbstractProductB * CreateProductB() = 0;
protected:
	AbstractFactory();
};

