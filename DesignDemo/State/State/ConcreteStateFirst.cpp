#include "ConcreteStateFirst.h"


ConcreteStateFirst::ConcreteStateFirst()
{
}


ConcreteStateFirst::~ConcreteStateFirst()
{
}
void ConcreteStateFirst::OperationInterface(ConcreteContext * context)
{
	cout << "ConcreteStateFrist::OperationInterface......" << endl;
}

void ConcreteStateFirst::OperationChangeState(ConcreteContext * context)
{
	OperationInterface(context);
	this->ChangeState(context,new ConcreteStateSecond());
}