#pragma once
#include <iostream>
#include "Subject.h"
using namespace std;
class ConcreteSubject : public Subject {

public:
	ConcreteSubject();
	~ConcreteSubject();
	void request();
};

