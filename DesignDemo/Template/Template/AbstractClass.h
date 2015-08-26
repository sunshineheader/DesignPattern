#pragma once
class AbstractClass {

public:
	virtual~AbstractClass();
	void TemplateMethod();
protected:
	AbstractClass();
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

