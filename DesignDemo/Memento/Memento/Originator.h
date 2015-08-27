#pragma once
#include <iostream>
#include <string>
#include "Memento.h"
using namespace std;

typedef string State;
class Memento;

class Originator {

public:
	Originator();
	Originator(const State & state);
	~Originator();
public:
	Memento * CreateMemento();
	void SetMemento(Memento * memento);
	void RestoreToMemento(Memento * memento);
	void SetState(const State & state);
	State GetState();
	void PrintState();
private:
	State m_state;
	Memento * m_memento;

};

