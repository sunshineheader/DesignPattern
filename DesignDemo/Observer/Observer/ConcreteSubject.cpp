#include "ConcreteSubject.h"


ConcreteSubject::ConcreteSubject()
{
	m_state= '\0';
}


ConcreteSubject::~ConcreteSubject()
{
}

void ConcreteSubject::SetState(const State & state)
{
	this->m_state = state;
}

State ConcreteSubject::GetState()
{

	return m_state;
}
