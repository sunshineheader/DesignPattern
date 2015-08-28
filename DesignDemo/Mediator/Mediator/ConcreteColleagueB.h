#pragma once
#include "Colleague.h"
class ConcreteColleagueB :
	public Colleague
{
public:
	ConcreteColleagueB();
	ConcreteColleagueB(Mediator * mdt);
	~ConcreteColleagueB();
	void DoAction();
	void SetState(const State & state);
	State GetState();
private:
	State _state;
};

