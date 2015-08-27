#include <iostream>
#include "Strategy.h"
#include "ConcreteStrategyFirst.h"
#include "ConcreteStrategySecond.h"
#include "ConcreteContext.h"
using namespace std;
int main()
{
	std::cout << "main() function initlaized successful ..." << std::endl;

	// Î¯ÍÐÄ£Ê½
	Strategy * strategy = new ConcreteStrategyFirst();
	ConcreteContext *ConcreteContextFirst = new ConcreteContext(strategy);
	ConcreteContextFirst->DoAction();

	strategy = nullptr;
	strategy = new ConcreteStrategySecond();
	ConcreteContext *ConcreteContextSecond = new ConcreteContext(strategy);
	ConcreteContextSecond->DoAction();

	system("PAUSE");
	return 0;

}