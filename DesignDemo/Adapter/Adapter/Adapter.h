#pragma once
#include <iostream>
#include "Target.h"
#include "Adaptee.h"
class Adapter:public Target,private Adaptee {

public:
	Adapter();
	~Adapter();
	void Request();
};

