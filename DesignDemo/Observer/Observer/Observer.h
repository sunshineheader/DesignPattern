#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Subject.h"
using namespace std;
typedef string State;
class Subject;

class Observer {

public:
	virtual~Observer();
	virtual void Update(Subject * subject) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
	State m_state;
};

