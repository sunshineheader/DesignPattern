#include "AbstractClass.h"


AbstractClass::AbstractClass()
{
}


AbstractClass::~AbstractClass()
{
}

void AbstractClass::TemplateMethod()
{
	this->PrimitiveOperation1();
	this->PrimitiveOperation2();
}