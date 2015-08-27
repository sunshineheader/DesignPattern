#pragma once
#include "Subject.h"
class ConcreteSubject : public Subject {

public:
	ConcreteSubject();
	~ConcreteSubject();
	void SetState(const State & state);
	State GetState();
private:
	State m_state;
};

