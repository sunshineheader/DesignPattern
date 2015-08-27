#include "ConcreteObserverFirst.h"


ConcreteObserverFirst::ConcreteObserverFirst(Subject * subject)
{
	m_subject = subject;
	m_subject->Attach(this);
}


ConcreteObserverFirst::~ConcreteObserverFirst()
{
	m_subject->Detach(this);
	if (nullptr != m_subject)
	{
		delete m_subject;
	}
}

Subject * ConcreteObserverFirst::GetSubject()
{
	return m_subject;
}

void  ConcreteObserverFirst::Update(Subject * subject)
{
	m_state = m_subject->GetState();
	PrintInfo();
}

void ConcreteObserverFirst::PrintInfo()
{
	std::cout << "ConcreteObserverFrist observer.... " << m_subject->GetState() << std::endl;
}