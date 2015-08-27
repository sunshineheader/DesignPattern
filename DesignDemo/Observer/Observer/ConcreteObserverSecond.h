#pragma once
#include <iostream>
#include <list>
#include <vector>
#include "Observer.h"
#include "Subject.h"

class ConcreteObserverSecond : public Observer {

public:
	ConcreteObserverSecond(Subject * subject);
	~ConcreteObserverSecond();
	virtual Subject * GetSubject();
	void Update(Subject * subject);
	void PrintInfo();
private:
	Subject * m_subject;
};

