#pragma once
#include "FlyWeight.h"
class UnshareConcreteFlyWeight : public FlyWeight {

public:
	UnshareConcreteFlyWeight();
	~UnshareConcreteFlyWeight();
	void operation();
protected:
	UnshareConcreteFlyWeight(const string & intrinsicState);
};

