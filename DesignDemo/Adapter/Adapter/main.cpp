#include <iostream>
#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"
using namespace std;

int main()
{
	//·ÖÅäÆ÷Ä£Ê½
	cout << "main() function is initlaized successful ... " << endl;
	Adapter *target_a = new Adapter();
	target_a->Request();
	Target *target = new Target();
	target->Request();
	system("PAUSE");
	return 0;
}