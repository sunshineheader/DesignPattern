#pragma once
#include "Observer.h"
class ConcreteObserverFirst : public Observer {

public:
	ConcreteObserverFirst(Subject * subject);
	virtual~ConcreteObserverFirst();
	virtual Subject * GetSubject();
	void Update(Subject * subject);
	void PrintInfo();
private:
	Subject * m_subject;
};

