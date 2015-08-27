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
   // ������State���п��Է���Context���private�ֶ�
	friend class State;
	bool ChangeState(State * state);
private:
	State * m_state;

};

