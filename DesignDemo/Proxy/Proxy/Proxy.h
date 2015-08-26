#pragma once
#include <iostream>
#include "Subject.h"
class Proxy :public Subject{

public:
	Proxy();
	Proxy(Subject * subject );
	~Proxy();
	void request();
private:
	Subject * m_subject;
};

