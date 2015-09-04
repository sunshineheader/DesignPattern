#pragma once
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;
class Builder {

public:
	Builder();
	virtual~Builder();
	virtual void BuildPartA(const string & buildPart) = 0;
	virtual void BuildPartB(const string & buildPart) = 0;
	virtual void BuildPartC(const string & buildPart) = 0;
	virtual Product*getProduct()=0;

};

