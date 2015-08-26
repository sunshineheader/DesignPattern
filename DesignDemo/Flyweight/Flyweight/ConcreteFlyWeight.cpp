#include "ConcreteFlyWeight.h"

ConcreteFlyWeight::ConcreteFlyWeight()
{

}

ConcreteFlyWeight::ConcreteFlyWeight(const string & intrinsicState) :FlyWeight(intrinsicState)
{
	cout << "ConcreteFlyweight Build....." << intrinsicState << endl;
}

ConcreteFlyWeight::~ConcreteFlyWeight()
{
}

void ConcreteFlyWeight::operation(const string & extrinsicState)
{

	cout << "ConcreteFlyweight:ÄÚÔÌ[" << this->getInsicState() << "] ÍâÔÌ[" << extrinsicState << "]" << endl;
}
