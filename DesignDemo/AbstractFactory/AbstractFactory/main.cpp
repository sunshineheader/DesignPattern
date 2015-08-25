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
	// 抽象工厂模式 创建实体产品
	// FactoryA,FactoryB 仅仅是一块内存地址 所以她不能访问 ConcreteProduct里的方法
	// 解决方案： 强制转换 最好使用 C++ 的强转， 不要使用 C 的
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