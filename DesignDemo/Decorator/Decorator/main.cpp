#include <iostream>
#include "Component.h"
#include "ConcreteComponent.h"
#include "Decorator.h"
#include "ConcreteDecorator.h"
using namespace std;

int main()
{
	cout << "main() function is initlaized successful ..." << endl;

	//װ��ģʽ�������ģʽ��������ϣ����ü̳У����ʹ������϶�
	Component *comonent = new ConcreteComponent();
	Decorator *decorator = new ConcreteDecorator(comonent);
	decorator->Operation();

	system("PAUSE");
	return 0;

}