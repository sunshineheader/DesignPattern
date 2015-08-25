#include <iostream>
#include "AbstractFactory.h"
#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"
#include "AbstractProductA.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductA2.h"
#include "AbstractProductB.h"
#include "ConcreteProductB1.h"
#include "ConcreteProductB2.h"
using namespace std;
/**/
int main()
{
	cout << "main() function is initlaized successful ..." << endl;
	// ���󹤳�ģʽ ����ʵ���Ʒ
	// FactoryA,FactoryB ������һ���ڴ��ַ ���������ܷ��� ConcreteProduct��ķ���
	// ��������� ǿ��ת�� ���ʹ�� C++ ��ǿת�� ��Ҫʹ�� C ��
	AbstractFactory *FactoryA = new ConcreteFactoryA();
	FactoryA->CreateProductA();
	FactoryA->CreateProductB();
	cout << "\n" << endl;
	AbstractFactory *FactoryB = new ConcreteFactoryB();
	FactoryB->CreateProductA();
	FactoryB->CreateProductB();
	cout << "\n" << endl;
	system("PAUSE");
	return 0;
}