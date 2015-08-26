#pragma once
#include <iostream>
#include "FlyWeight.h"
class ConcreteFlyWeight : public FlyWeight {

public:
	ConcreteFlyWeight();
	~ConcreteFlyWeight();
	void operation(const string & extrinsicState);

	ConcreteFlyWeight(const string & intrinsicState);
};

