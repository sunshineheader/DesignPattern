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
		std::cout << "ConcreteHandleFrist �ҰѴ���Ȩ����̽ڵ�....." <<std::endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout << "ConcreteHandleFrist û�к���ˣ��ұ����Լ�����...." << std::endl;
	}
}

