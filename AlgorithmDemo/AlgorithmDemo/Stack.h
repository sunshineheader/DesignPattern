#include <iostream>
const int StackMax = 10;

class Stack {

public:
	Stack();
	~Stack();
public:
	void  init();
	void  push(float x);
	float pop(void);
private:
	float stack [StackMax];
	int stacktop;

};


