#include "ConcreteColleagueB.h"


ConcreteColleagueB::ConcreteColleagueB()
{
	_state = "";
}

ConcreteColleagueB::ConcreteColleagueB(Mediator * mdt) :Colleague(mdt)
{
}

ConcreteColleagueB::~ConcreteColleagueB()
{
}

void ConcreteColleagueB::DoAction()
{
	_mdt->DoActionFromBtoA();
	cout << "State of ConcreteColleageA:" << " " << this->GetState() << endl;

}
void ConcreteColleagueB::SetState(const State & state)
{
	_state = state;
}

State ConcreteColleagueB::GetState()
{
	return _state;
}