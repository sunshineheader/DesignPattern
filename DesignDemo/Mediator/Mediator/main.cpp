#include <iostream>
#include "Colleague.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "Mediator.h"
#include "ConcreteMediator.h"
using namespace std;

/*
Mediator模式的实现关键就是将对象Colleague之间的通信封装到一个类种单独处理，为了模拟Mediator模式的功能，这里给每个Colleague对象一个string型别以记录其状态，

并通过状态改变来演示对象之间的交互和通信。这里主要就Mediator的示例运行结果给出分析：

1）将ConcreteColleageA对象设置状态“old”，ConcreteColleageB也设置状态“old”；

2）ConcreteColleageA对象改变状态，并在Action中和ConcreteColleageB对象进行通信，并改变ConcreteColleageB对象的状态为“new”

3）ConcreteColleageB对象改变状态，并在Action中和ConcreteColleageA对象进行通信，并改变ConcreteColleageA对象的状态为“new”；

注意到，两个Colleague对象并不知道它交互的对象，并且也不是显示地处理交互过程，这一切都是通过Mediator对象完成的，示例程序运行的结果也正是证明了这一点。

*/
int main()
{
	/*每个成员都必须知道Mediator,并且和 Mediator联系,而不是和其他成员联系.

	至此,Mediator模式框架完成,可以发现Mediator模式规定不是很多,大体框架也比较简单,但实际使用起来就非常灵活.

	Mediator模式在事件驱动类应用中比较多,例如界面设计GUI.;聊天,消息传递等,在聊天应用中,需要有一个MessageMediator,专门负责request/reponse之间任务的调节.

	Mediator模式是一种很有用并且很常用的模式，它通过将对象间的通信封装到一个类中，将多对多的通信转化为一对多的通信，降低了系统的复杂性。

	Mediator还获得系统解耦的特性，通过Mediator，各个Colleague就不必维护各自通信的对象和通信协议，降低了系统的耦合性，Mediator和各个Colleague就可以相互独立地修改了。

	Mediator模式还有一个很显著额特点就是将控制集中，集中的优点就是便于管理，也正式符合了OO设计中的每个类的职责要单一和集中的原则。

	*/
	std::cout << "main() function is initlaized successful ..." << std::endl;

	ConcreteMediator* concretemediator = new ConcreteMediator();
	ConcreteColleagueA* concreteColleagueA = new ConcreteColleagueA(concretemediator);
	ConcreteColleagueB* cconcreteColleagueB = new ConcreteColleagueB(concretemediator);

	concretemediator->IntroColleague(concreteColleagueA, cconcreteColleagueB);

	concreteColleagueA->SetState("old");
	cconcreteColleagueB->SetState("old");

	concreteColleagueA->DoAction();
	cconcreteColleagueB->DoAction();
	cout << endl;
	concreteColleagueA->SetState("new");
	concreteColleagueA->DoAction();
	concreteColleagueA->DoAction();
	cout << endl;
	cconcreteColleagueB->SetState("old");
	cconcreteColleagueB->DoAction();
	concreteColleagueA->DoAction();

	system("PAUSE");
	return 0;


}