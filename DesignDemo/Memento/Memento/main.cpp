#include <iostream>
#include "Memento.h"
#include "Originator.h"
using namespace std;


int main()
{
	cout << "main() function initlaized successful ..." << endl;
	Originator *originator = new Originator();
	//±¸ÍüÇ°×´Ì¬
	originator->SetState("old");
	originator->PrintState();
	//½«×´Ì¬±¸Íü
	Memento * menento = originator->CreateMemento();
	originator->SetState("new");
	originator->PrintState();
	//»Ö¸´ÐÞ¸ÄÇ°×´Ì¬
	originator->RestoreToMemento(menento);
	originator->PrintState();

	system("PAUSE");
	return 0;

}