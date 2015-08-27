#include "ConcreteContext.h"


ConcreteContext::ConcreteContext(Strategy * strategy)
{
	this->_strategy = strategy;
}


ConcreteContext::~ConcreteContext()
{
	delete _strategy;
}

void ConcreteContext::DoAction()
{
	_strategy->AlgrithmInterface();
}
