#pragma once
class Abstraction {

public:
	Abstraction();
	virtual~Abstraction();
	virtual void Operation() = 0;
};

