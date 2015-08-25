#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"
class ConcreteFactoryA : public AbstractFactory {

public:
	ConcreteFactoryA();
	~ConcreteFactoryA();
public:
	// ConcreteFactoryA return  ConcreteProductA1,ConcreteProductB1
	 AbstractProductA * CreateProductA();
	 AbstractProductB * CreateProductB();

};

