#pragma once
#include <iostream>
#include <string>
#include "Mediator.h"
using namespace std;

typedef string State;
class Mediator;

class Colleague
{
public:
	virtual~Colleague();
	virtual void DoAction() = 0;
	virtual void SetState(const State & state) = 0;
	virtual State GetState() = 0;
protected:
	Colleague();
	Colleague(Mediator* mdt);
	Mediator* _mdt;
};

