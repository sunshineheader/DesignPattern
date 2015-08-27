#include "ConcreteStateSecond.h"


ConcreteStateSecond::ConcreteStateSecond()
{
}


ConcreteStateSecond::~ConcreteStateSecond()
{
}

void ConcreteStateSecond::OperationInterface(ConcreteContext * context)
{
	cout << "ConcreteStateSecond::OperationInterface......" << endl;
}

void ConcreteStateSecond::OperationChangeState(ConcreteContext * context)
{
	OperationInterface(context);
	this->ChangeState(context,new ConcreteStateFirst());
}