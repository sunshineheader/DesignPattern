#include "State.h"


State::State()
{
}


State::~State()
{
}

void State::OperationInterface(ConcreteContext * context)
{
	cout << "State::.." << endl;
}

void State::OperationChangeState(ConcreteContext * context)
{

	
}
bool State::ChangeState(ConcreteContext * context, State * state)
{
	context->ChangeState(state);
	return true;
}