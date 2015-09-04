#include "Composite.h"


Composite::Composite()
{
}


Composite::~Composite()
{
}

void Composite::operation()
{
	vector<Component*>::iterator iter;
	for (iter = Vec.begin(); iter != Vec.end(); iter++)
	{
		(*iter)->operation();
	}
	
}

void Composite::add(Component *component)
{
	Vec.push_back(component);
}

void Composite::remove(Component  * component)
{
	vector<Component*>::iterator iter;
	for (iter = Vec.begin(); iter != Vec.end();iter++)
	{
		if (component==(*iter))
		{
			Vec.erase(iter);
			break;
		}
		break;
	}
}
Component * Composite::getChild(int index)
{
	return Vec.at(index);
}