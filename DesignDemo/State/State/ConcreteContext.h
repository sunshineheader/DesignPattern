#pragma once
#include <iostream>
#include "State.h"
using namespace std;

class State;

class ConcreteContext {

public:
	ConcreteContext();
	ConcreteContext(State * state);
	~ConcreteContext();
	void OprationInterface();
	void OperationChangState();
private:
   // 表明在State类中可以访问Context类的private字段
	friend class State;
	bool ChangeState(State * state);
private:
	State * m_state;

};

