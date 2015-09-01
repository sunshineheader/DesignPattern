#include <iostream>
#include "Handle.h"
#include "ConcreteHandleFrist.h"
#include "ConcreteHandleSecond.h"
using namespace std;
int main()
{
	cout << "main() function init ...." << endl;
	Handle* h1 = new ConcreteHandleFrist();
	Handle* h2 = new ConcreteHandleSecond();
	h1->SetSuccessor(h2);
	h1->HandleRequest();
	system("PAUSE");
	return 0;
}