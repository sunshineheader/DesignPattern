#include <iostream>
#include "Facade.h"
#include "SystemFirst.h"
#include "SystemSecond.h"
using namespace std;

/*
 在遇到以下情况使用facade模式：
 1) 当你要为一个复杂子系统提供一个简单接口时。子系统往往因为不断演化而变得越来越复杂。大多数模式使用时都会产生更多更小的类。 
 这使得子系统更具可重用性，也更容易对子系统进行定制，但这也给那些不需要定制子系统的用户带来一些使用上的困难。facade可以提供一个简单的缺省视图，
 这一视图对大多数用户来说已经足够，而那些需要更多的可定制性的用户可以越过facade层。
 2) 客户程序与抽象类的实现部分之间存在着很大的依赖性。引入 facade将这个子系统与客户以及其他的子系统分离，可以提高子系统的独立性 和可移植性。
 3) 当你需要构建一个层次结构的子系统时，使用 facade模式定义子系统中每层的入口点。如果子系统之间是相互依赖的，你可以让它们仅通过facade进行通讯，从而简化了它们之间的依赖关系。
*/
int main()
{
	cout << "main() function is initlaized successful ..." << endl;
	// 外观设计模式 统一了系统接口
	Facade *facade = new Facade();
	facade->OperationWrapper();
	system("PAUSE");
	return 0;
}