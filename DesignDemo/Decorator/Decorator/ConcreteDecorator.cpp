#include "ConcreteDecorator.h"


ConcreteDecorator::ConcreteDecorator(Component * component) :Decorator(component)
{
}


ConcreteDecorator::~ConcreteDecorator()
{
}
void ConcreteDecorator::Operation()
{
	m_component->Operation();
	this->addBehavior();
}
void ConcreteDecorator::addBehavior()
{
	std::cout << "ConcreteDecorator::addBehavior()...addBehavior..." << std::endl;
}