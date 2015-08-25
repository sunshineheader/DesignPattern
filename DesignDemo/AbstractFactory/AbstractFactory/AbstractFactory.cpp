#include "AbstractFactory.h"


AbstractFactory::AbstractFactory()
{
}


AbstractFactory::~AbstractFactory()
{
}

AbstractProductA * AbstractFactory::CreateProductA()
{
	return nullptr;
}

AbstractProductB * AbstractFactory::CreateProductB()
{
	return nullptr;
}