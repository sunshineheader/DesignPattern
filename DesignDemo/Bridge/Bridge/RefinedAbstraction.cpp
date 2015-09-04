#include "RefinedAbstraction.h"


RefinedAbstraction::RefinedAbstraction(AbstractionImplement * implement)
{
	this->_implement = implement;
}


RefinedAbstraction::~RefinedAbstraction()
{
}
void RefinedAbstraction::Operation()
{
	_implement->Operaction();
}