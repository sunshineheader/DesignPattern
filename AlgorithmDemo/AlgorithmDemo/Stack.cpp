#include "Stack.h"
using namespace std;
Stack::Stack() {
}

Stack::~Stack() {
}
void Stack::init() {
	stacktop = 0;
}
void Stack::push(float x) {
	if (stacktop>StackMax){
		cout << "Stack is full !" << endl;
		return;
	}
	stack[stacktop] = x;
	stacktop++;
}
float Stack::pop(void){
	stacktop--;
	if (stacktop < 0) {
		cout << "Stack is uderflow !" << endl;
		return 0;
	}
	return stack[stacktop];
}

