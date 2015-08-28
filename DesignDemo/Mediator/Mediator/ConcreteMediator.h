#pragma once
#include "Mediator.h"
class ConcreteMediator :
	public Mediator
{
public:
	ConcreteMediator();
	ConcreteMediator(Colleague * ColleaugeA,Colleague * ColleaugeB);
	~ConcreteMediator();

	void SetConcreteColleagueA(Colleague * ColleagueA);
	Colleague * GetConcreteColleagueA();

	void SetConcreteColleagueB(Colleague * ColleagueB);
	Colleague * GetConcreteColleagueB();

	void IntroColleague(Colleague * ColleaugeA, Colleague * ColleaugeB);
	void DoActionFromAtoB();
	void DoActionFromBtoA();

private:
	Colleague * _ColleagueA;
	Colleague * _ColleagueB;

};

