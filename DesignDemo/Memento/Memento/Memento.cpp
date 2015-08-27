#include "Memento.h"


Memento::Memento()
{
}
Memento::Memento(const State & state)
{
	m_state = state;
}

Memento::~Memento()
{
}
void Memento::SetState(const State & state)
{
	m_state = state;
}

State Memento::GetState()
{
	return m_state;
}