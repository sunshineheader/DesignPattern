#include "Facade.h"


Facade::Facade()
{
	this->system_first = new SystemFirst();
	this->system_second = new SystemSecond();
}


Facade::~Facade()
{
	delete system_first;
	system_first = nullptr;
	delete system_second;
	system_second = nullptr;
}

void Facade::OperationWrapper()
{
	this->system_first->operation();
	this->system_second->operation();
}