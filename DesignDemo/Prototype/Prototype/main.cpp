#include <iostream>
#include "Prototype.h"
#include "ConcretePrototype.h"
using namespace std;

int main()
{
	//ԭ��ģʽ 
	cout << "main() function is initlaized successful ..." << endl;
	Prototype * prototype = new ConcretePrototype();
	Prototype *prototype_clone = prototype->clone();
	system("PAUSE");
	return 0;
}