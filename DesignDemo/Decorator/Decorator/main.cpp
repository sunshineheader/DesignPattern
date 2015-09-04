#include <iostream>
#include "Component.h"
#include "ConcreteComponent.h"
#include "Decorator.h"
#include "ConcreteDecorator.h"
using namespace std;

int main()
{
	cout << "main() function is initlaized successful ..." << endl;

	//装饰模式就是组合模式，多用组合，少用继承，降低代码的耦合度
	Component *comonent = new ConcreteComponent();
	Decorator *decorator = new ConcreteDecorator(comonent);
	decorator->Operation();

	system("PAUSE");
	return 0;

}