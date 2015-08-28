#include "ConcreteMediator.h"


ConcreteMediator::ConcreteMediator()
{
	_ColleagueA = nullptr;
	_ColleagueB = nullptr;
}

ConcreteMediator::ConcreteMediator(Colleague * ColleaugeA, Colleague * ColleaugeB)
{
	_ColleagueA = ColleaugeA;
	_ColleagueB = ColleaugeB;
}

ConcreteMediator::~ConcreteMediator()
{
	
}

void ConcreteMediator::SetConcreteColleagueA(Colleague* ColleagueA)
{
	this->_ColleagueA = ColleagueA;
}

Colleague* ConcreteMediator::GetConcreteColleagueA()
{
	return _ColleagueA;
}

void ConcreteMediator::SetConcreteColleagueB(Colleague *ColleagueB)
{
	this->_ColleagueB = ColleagueB;
}

Colleague * ConcreteMediator::GetConcreteColleagueB()
{
	return nullptr;
}

void ConcreteMediator::IntroColleague(Colleague * ColleagueA, Colleague * ColleagueB)
{
	this->_ColleagueA = ColleagueA;
	this->_ColleagueB = ColleagueB;
}

void ConcreteMediator::DoActionFromAtoB()
{
	_ColleagueB->SetState(_ColleagueA->GetState());
}

void ConcreteMediator::DoActionFromBtoA()
{
	_ColleagueA->SetState(_ColleagueB->GetState());
}