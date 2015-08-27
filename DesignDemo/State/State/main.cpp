#include <iostream>
#include "State.h"
#include "ConcreteStateFirst.h"
#include "ConcreteStateSecond.h"
#include "ConcreteContext.h"
using namespace std;

int main()
{
	// 状态模式 不利于代码的维护
	std::cout << "main() function is initlaized successful ..." << std::endl;

	State * state = new ConcreteStateFirst();

	ConcreteContext * context = new ConcreteContext(state);
	context->OperationChangState();
	context->OperationChangState();
	context->OperationChangState();

	system("PAUSE");
	return 0;

}