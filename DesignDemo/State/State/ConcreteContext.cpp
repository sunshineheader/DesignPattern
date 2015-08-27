#include "ConcreteContext.h"


ConcreteContext::ConcreteContext()
{
}

ConcreteContext::ConcreteContext(State * state)
{
	this->m_state = state;
}
ConcreteContext::~ConcreteContext()
{
	delete m_state;
}

void ConcreteContext::OprationInterface()
{
	m_state->OperationInterface(this);
}

void ConcreteContext::OperationChangState()
{
	m_state->OperationChangeState(this);
}

bool ConcreteContext::ChangeState(State * state)
{
	this->m_state = state;
	return true;
}
