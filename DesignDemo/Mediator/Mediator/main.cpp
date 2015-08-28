#include <iostream>
#include "Colleague.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "Mediator.h"
#include "ConcreteMediator.h"
using namespace std;

int main()
{
	/*每个成员都必须知道Mediator,并且和 Mediator联系,而不是和其他成员联系.

     至此,Mediator模式框架完成,可以发现Mediator模式规定不是很多,大体框架也比较简单,但实际使用起来就非常灵活.

     Mediator模式在事件驱动类应用中比较多,例如界面设计GUI.;聊天,消息传递等,在聊天应用中,需要有一个MessageMediator,专门负责request/reponse之间任务的调节.*/

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