#include "ConcreteColleagueA.h"


ConcreteColleagueA::ConcreteColleagueA()
{
	_state = "";
}

ConcreteColleagueA::ConcreteColleagueA(Mediator * mdt) :Colleague(mdt)
{
}

ConcreteColleagueA::~ConcreteColleagueA()
{
}

void ConcreteColleagueA::DoAction()
{
	_mdt->DoActionFromAtoB();
	cout << "State of ConcreteColleageB:" << " " << this->GetState() << endl;
}

void ConcreteColleagueA::SetState(const State & state)
{
	_state = state;
}

State ConcreteColleagueA::GetState()
{
	return _state;
}

