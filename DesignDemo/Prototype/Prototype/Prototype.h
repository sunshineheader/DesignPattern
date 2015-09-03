#pragma once
#include <iostream>
using namespace std;
class Prototype {
public:
	virtual~Prototype();
	virtual Prototype*clone() const = 0;
protected:
	Prototype();
};

