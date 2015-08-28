#include <iostream>
#include "Colleague.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "Mediator.h"
#include "ConcreteMediator.h"
using namespace std;

/*
Mediatorģʽ��ʵ�ֹؼ����ǽ�����Colleague֮���ͨ�ŷ�װ��һ�����ֵ�������Ϊ��ģ��Mediatorģʽ�Ĺ��ܣ������ÿ��Colleague����һ��string�ͱ��Լ�¼��״̬��

��ͨ��״̬�ı�����ʾ����֮��Ľ�����ͨ�š�������Ҫ��Mediator��ʾ�����н������������

1����ConcreteColleageA��������״̬��old����ConcreteColleageBҲ����״̬��old����

2��ConcreteColleageA����ı�״̬������Action�к�ConcreteColleageB�������ͨ�ţ����ı�ConcreteColleageB�����״̬Ϊ��new��

3��ConcreteColleageB����ı�״̬������Action�к�ConcreteColleageA�������ͨ�ţ����ı�ConcreteColleageA�����״̬Ϊ��new����

ע�⵽������Colleague���󲢲�֪���������Ķ��󣬲���Ҳ������ʾ�ش��������̣���һ�ж���ͨ��Mediator������ɵģ�ʾ���������еĽ��Ҳ����֤������һ�㡣

*/
int main()
{
	/*ÿ����Ա������֪��Mediator,���Һ� Mediator��ϵ,�����Ǻ�������Ա��ϵ.

	����,Mediatorģʽ������,���Է���Mediatorģʽ�涨���Ǻܶ�,������Ҳ�Ƚϼ�,��ʵ��ʹ�������ͷǳ����.

	Mediatorģʽ���¼�������Ӧ���бȽ϶�,����������GUI.;����,��Ϣ���ݵ�,������Ӧ����,��Ҫ��һ��MessageMediator,ר�Ÿ���request/reponse֮������ĵ���.

	Mediatorģʽ��һ�ֺ����ò��Һܳ��õ�ģʽ����ͨ����������ͨ�ŷ�װ��һ�����У�����Զ��ͨ��ת��Ϊһ�Զ��ͨ�ţ�������ϵͳ�ĸ����ԡ�

	Mediator�����ϵͳ��������ԣ�ͨ��Mediator������Colleague�Ͳ���ά������ͨ�ŵĶ����ͨ��Э�飬������ϵͳ������ԣ�Mediator�͸���Colleague�Ϳ����໥�������޸��ˡ�

	Mediatorģʽ����һ�����������ص���ǽ����Ƽ��У����е��ŵ���Ǳ��ڹ���Ҳ��ʽ������OO����е�ÿ�����ְ��Ҫ��һ�ͼ��е�ԭ��

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