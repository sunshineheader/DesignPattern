#pragma once
#include <iostream>
#include "SystemFirst.h"
#include "SystemSecond.h"
using namespace std;

class Facade {

public:
	Facade();
	~Facade();
	void OperationWrapper();
private:
	SystemFirst * system_first;
	SystemSecond * system_second;


};

