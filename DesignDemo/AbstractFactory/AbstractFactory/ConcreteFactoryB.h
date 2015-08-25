#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

class ConcreteFactoryB : public AbstractFactory {

public:
	ConcreteFactoryB();
	~ConcreteFactoryB();
public:
	AbstractProductA * CreateProductA();
	AbstractProductB * CreateProductB();
};

