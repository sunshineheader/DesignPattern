#include "ConcreteStrategyFirst.h"


ConcreteStrategyFirst::ConcreteStrategyFirst()
{
}


ConcreteStrategyFirst::~ConcreteStrategyFirst()
{
	std::cout << " ~ConcreteStrategyFirst..... " << std::endl;
}

void ConcreteStrategyFirst::AlgrithmInterface()
{
	cout << "test ! ! ! ConcreteStrategyFirst" << endl;
}