#pragma once
#include "Builder.h"
class Builder;

class Director {

public:
	Director();
	Director(Builder * builder);
	~Director();
	void Construct();
private:
	Builder * _builder;
};

