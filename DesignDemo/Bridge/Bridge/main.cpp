#include <iostream>
#include "Abstraction.h"
#include "RefinedAbstraction.h"
#include "AbstractionImplement.h"
#include "ConcreteImplementA.h"
#include "ConcreteImplementB.h"
using namespace std;

int main()
{
	cout << " main() function is initlaized successful ..." << endl;
	// гедёй╫
	AbstractionImplement *implement_a = new ConcreteImplementA();
	RefinedAbstraction *refined_abstraction_a = new RefinedAbstraction(implement_a);
	refined_abstraction_a->Operation();

	AbstractionImplement *imolement_b = new ConcreteImplementB();
	RefinedAbstraction *refined_abstraction_b = new RefinedAbstraction(imolement_b);
	refined_abstraction_b->Operation();


	system("PAUSE");
	return 0;

}