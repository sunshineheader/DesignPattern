#include "Originator.h"


Originator::Originator()
{
	m_state = "";
	m_memento = nullptr;
}

Originator::Originator(const State & state)
{
	m_state = state;
	m_memento = nullptr;
}

Originator::~Originator()
{
}

Memento * Originator::CreateMemento()
{
	return new Memento(m_state);
}

void Originator::SetMemento(Memento * memento)
{
	m_memento = memento;
}

void Originator::RestoreToMemento(Memento * memento)
{
	m_memento = memento;
	m_memento->GetState();
}

void  Originator::SetState(const State & state)
{
	m_state = state;
}

State Originator::GetState()
{
	return m_state;
}
void Originator::PrintState()
{
	cout << this->m_state << "....." << endl;
}
