#include "Decorator.h"



Decorator::Decorator(Component * component)
{
	m_component = component;
}


Decorator::~Decorator()
{
	delete m_component;
	m_component = nullptr;
}
void Decorator::Operation()
{

}