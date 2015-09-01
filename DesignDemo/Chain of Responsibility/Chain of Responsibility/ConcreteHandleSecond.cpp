#include "ConcreteHandleSecond.h"


ConcreteHandleSecond::ConcreteHandleSecond()
{
}

ConcreteHandleSecond::ConcreteHandleSecond(Handle *succ)
{

}

ConcreteHandleSecond::~ConcreteHandleSecond()
{
}

void ConcreteHandleSecond::HandleRequest()
{
	if (this->GetSuccessor() != 0)
	{
		std::cout << "ConcreteHandleSecond 我把处理权给后继节点....." << std::endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout << "ConcreteHandleSecond 没有后继了，我必须自己处理...." << std::endl;
	}
}