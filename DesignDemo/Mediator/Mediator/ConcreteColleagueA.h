#pragma once
#include "Colleague.h"
class ConcreteColleagueA :
	public Colleague
{
public:
	ConcreteColleagueA();
	ConcreteColleagueA(Mediator * mdt);
	~ConcreteColleagueA();
	void DoAction();
	void SetState(const State & state);
	State GetState();
private:
	State _state;
};

