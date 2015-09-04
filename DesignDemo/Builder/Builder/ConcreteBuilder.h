#pragma once
#include "Builder.h"
class ConcreteBuilder : public Builder {

public:
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPartA(const string & buildPart);
	void BuildPartB(const string & buildPart);
	void BuildPartC(const string & buildPart);
	Product*getProduct();
};

