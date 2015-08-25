#include "ConcreteFactoryB.h"


ConcreteFactoryB::ConcreteFactoryB()
{
}


ConcreteFactoryB::~ConcreteFactoryB()
{
}

AbstractProductA * ConcreteFactoryB::CreateProductA()
{
	return new ConcreteProductA2();
}

AbstractProductB * ConcreteFactoryB::CreateProductB()
{
	return new ConcreteProductB2();
}