#include "ConcreteObserverSecond.h"


ConcreteObserverSecond::ConcreteObserverSecond(Subject * subject)
{
	m_subject = subject;
	m_subject->Attach(this);
}


ConcreteObserverSecond::~ConcreteObserverSecond()
{
	m_subject->Detach(this);
	if (nullptr!=m_subject)
	{
		delete  m_subject;
	}
}

Subject * ConcreteObserverSecond::GetSubject()
{
	return m_subject;
}

void  ConcreteObserverSecond::Update(Subject * subject)
{
	m_state = m_subject->GetState();
	PrintInfo();
}

void ConcreteObserverSecond::PrintInfo()
{
	std::cout << "ConcreteObserverSecond observer.... " << m_subject->GetState() << std::endl;
}