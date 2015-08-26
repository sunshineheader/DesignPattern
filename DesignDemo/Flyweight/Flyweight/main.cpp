#include <iostream>
#include "FlyWeight.h"
#include "ConcreteFlyWeight.h"
#include "FlyWeightFactory.h"
using namespace std;

int main()
{
	// �������ģʽ
	cout << " main() function is initlaized successful ..." << endl;
	// ����һ������������� factory
	FlyWeightFactory  *factory = new FlyWeightFactory();

	FlyWeight *flyweight1 = new ConcreteFlyWeight();
	flyweight1 = factory->getFlyWeight("hello");

	flyweight1->operation("world");

	FlyWeight *flyweight2 = new ConcreteFlyWeight();
	flyweight2 = factory->getFlyWeight("world");
	flyweight2->operation("hello");

	system("PAUSE");
	return 0;

}