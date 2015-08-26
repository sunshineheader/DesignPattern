#include "FlyWeight.h"

FlyWeight::FlyWeight()
{

}
FlyWeight::FlyWeight(const string & intrinsicState)
{
	this->_intrinsicState = intrinsicState;
}


FlyWeight::~FlyWeight()
{
}

void FlyWeight::operation(const string & extrinsicState)
{
}

string FlyWeight::getInsicState()
{
	return this->_intrinsicState;
}

