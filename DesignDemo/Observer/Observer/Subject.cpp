#include "Subject.h"


Subject::Subject()
{
	// ��ģ��ʹ��֮ǰ һ��Ҫ�� new ����
	_observer_list = new list < Observer * > ;
}


Subject::~Subject()
{
	delete _observer_list;
}

void Subject::Attach(Observer * observer)
{
	_observer_list->push_front(observer);
}

void Subject::Detach(Observer * observer)
{
	if (nullptr !=_observer_list)
	{
		_observer_list->remove(observer);
	}
}

void Subject::Notify()
{
	list<Observer *>::iterator iter;
	for (iter = _observer_list->begin(); iter != _observer_list->end(); iter++)
	{
		(*iter)->Update(this);
	}

}

State Subject::GetState()
{
	return nullptr;
}