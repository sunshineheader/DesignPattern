#include "ConcreteStrategySecond.h"


ConcreteStrategySecond::ConcreteStrategySecond()
{
}


ConcreteStrategySecond::~ConcreteStrategySecond()
{
	std::cout << " ~ConcreteStrategySecond..... " << std::endl;
}

void ConcreteStrategySecond::AlgrithmInterface()
{
	cout << "test ! ! ! ConcreteStrategySecond" << endl;
}