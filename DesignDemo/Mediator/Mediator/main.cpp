#include <iostream>
#include "Colleague.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "Mediator.h"
#include "ConcreteMediator.h"
using namespace std;

int main()
{
	/*ÿ����Ա������֪��Mediator,���Һ� Mediator��ϵ,�����Ǻ�������Ա��ϵ.

     ����,Mediatorģʽ������,���Է���Mediatorģʽ�涨���Ǻܶ�,������Ҳ�Ƚϼ�,��ʵ��ʹ�������ͷǳ����.

     Mediatorģʽ���¼�������Ӧ���бȽ϶�,����������GUI.;����,��Ϣ���ݵ�,������Ӧ����,��Ҫ��һ��MessageMediator,ר�Ÿ���request/reponse֮������ĵ���.*/

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