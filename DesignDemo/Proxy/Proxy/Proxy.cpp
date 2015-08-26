#include "Proxy.h"


Proxy::Proxy()
{
}

Proxy::Proxy(Subject * subject)
{
	this->m_subject = subject;
}

Proxy::~Proxy()
{
	delete m_subject;
}
void Proxy::request()
{
	std::cout << "Proxy request is ..." <<std::endl;
	m_subject->request();

}
