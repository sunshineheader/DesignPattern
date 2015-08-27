#include <iostream>
#include "Memento.h"
#include "Originator.h"
using namespace std;


int main()
{
	cout << "main() function initlaized successful ..." << endl;
	Originator *originator = new Originator();
	//����ǰ״̬
	originator->SetState("old");
	originator->PrintState();
	//��״̬����
	Memento * menento = originator->CreateMemento();
	originator->SetState("new");
	originator->PrintState();
	//�ָ��޸�ǰ״̬
	originator->RestoreToMemento(menento);
	originator->PrintState();

	system("PAUSE");
	return 0;

}