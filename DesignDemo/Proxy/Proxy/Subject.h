#pragma once
class Subject {

public:
	Subject();
	virtual~Subject();
	virtual void request() = 0;
};

