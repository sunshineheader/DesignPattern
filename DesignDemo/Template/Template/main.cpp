#include <iostream>
#include"AbstractClass.h"
#include "ConcreteClassFrist.h"
#include "ConcreteClassSecond.h"
using namespace std;

int main()
{
	// Ä£°åÄ£Ê½
	std::cout << "main() function is initlaized successful ..." << std::endl;
	AbstractClass * abstarct1 = new ConcreteClassFrist();
	abstarct1->TemplateMethod();
	AbstractClass * abstract2 = new ConcreteClassSecond();
	abstract2->TemplateMethod();
	system("PAUSE");
	return 0;
}