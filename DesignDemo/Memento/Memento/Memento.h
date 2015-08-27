#pragma once
#include <iostream>
#include <string>
#include "Originator.h"
using namespace std;

class Memento {

private:
	/*这是最关键的地方，将Originator为friend类，可以访问内部信息，但是其他类不能访问*/
	friend class Originator;
	typedef string State;
	Memento();
	Memento(const State & state);
	~Memento();
	void SetState(const State & state);
	State GetState();
private:
	State m_state;


};

