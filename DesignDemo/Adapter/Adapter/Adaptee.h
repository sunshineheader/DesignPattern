#pragma once
#include <iostream>
using namespace std;

class Adaptee {
public:
	Adaptee();
	virtual~Adaptee();
	virtual void SpecificRequest();
};

