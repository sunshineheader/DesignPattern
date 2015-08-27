#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Observer.h"
using namespace std;

typedef string State;
class Observer;

class Subject {

public:
	virtual~Subject();
	virtual void Attach(Observer * observer);
	virtual void Detach(Observer * observer);
	virtual void Notify();
	virtual void SetState(const State & state) = 0;
	virtual State GetState();
protected:
	Subject();
private:
	list<Observer * > *_observer_list;
};

