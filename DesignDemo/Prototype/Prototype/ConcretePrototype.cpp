#include "ConcretePrototype.h"


ConcretePrototype::ConcretePrototype()
{
}
ConcretePrototype::ConcretePrototype(const ConcretePrototype & concrete_prototype)
{
	cout << "ConcretePrototype copy endl  ..." << endl;
}


ConcretePrototype::~ConcretePrototype()
{
}

Prototype * ConcretePrototype::clone() const
{
	return new ConcretePrototype(*this);
}


