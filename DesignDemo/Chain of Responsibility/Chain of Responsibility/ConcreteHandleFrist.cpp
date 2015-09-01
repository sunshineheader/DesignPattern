#include "ConcreteHandleFrist.h"


ConcreteHandleFrist::ConcreteHandleFrist()
{
}


ConcreteHandleFrist::~ConcreteHandleFrist()
{
}
ConcreteHandleFrist::ConcreteHandleFrist(Handle * succ)
{

}

void ConcreteHandleFrist::HandleRequest()
{
	if (this->GetSuccessor() != 0)
	{
		std::cout << "ConcreteHandleFrist 我把处理权给后继节点....." <<std::endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout << "ConcreteHandleFrist 没有后继了，我必须自己处理...." << std::endl;
	}
}

