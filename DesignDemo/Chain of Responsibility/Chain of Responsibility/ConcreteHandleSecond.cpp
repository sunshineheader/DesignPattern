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
		std::cout << "ConcreteHandleSecond �ҰѴ���Ȩ����̽ڵ�....." << std::endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout << "ConcreteHandleSecond û�к���ˣ��ұ����Լ�����...." << std::endl;
	}
}